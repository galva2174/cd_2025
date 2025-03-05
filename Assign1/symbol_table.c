/* symbol_table.c */
#include "symbol_table.h"

static SymbolTable symbol_table;

void init_symbol_table() {
    symbol_table.symbol_count = 0;
    symbol_table.current_scope = 0;
}

void enter_scope() {
    symbol_table.current_scope++;
    if (symbol_table.current_scope >= MAX_SCOPE_DEPTH) {
        fprintf(stderr, "Error: Maximum scope depth exceeded\n");
        exit(1);
    }
}

void exit_scope() {
    // Remove all symbols from the current scope
    for (int i = symbol_table.symbol_count - 1; i >= 0; i--) {
        if (symbol_table.symbols[i].scope_level == symbol_table.current_scope) {
            free(symbol_table.symbols[i].lines_used);
            if (symbol_table.symbols[i].type == TYPE_INT_ARRAY || 
                symbol_table.symbols[i].type == TYPE_CHAR_ARRAY) {
                free(symbol_table.symbols[i].value.array_vals);
            }
            symbol_table.symbol_count--;
        }
    }
    symbol_table.current_scope--;
}

int add_symbol(const char* name, DataType type, int line_number) {
    // Check if symbol already exists in current scope
    for (int i = 0; i < symbol_table.symbol_count; i++) {
        if (symbol_table.symbols[i].scope_level == symbol_table.current_scope &&
            strcmp(symbol_table.symbols[i].name, name) == 0) {
            return 0; // Symbol already exists in current scope
        }
    }

    if (symbol_table.symbol_count >= MAX_SYMBOLS) {
        fprintf(stderr, "Error: Symbol table full\n");
        exit(1);
    }

    Symbol* symbol = &symbol_table.symbols[symbol_table.symbol_count];
    strncpy(symbol->name, name, MAX_SYMBOL_LENGTH - 1);
    symbol->name[MAX_SYMBOL_LENGTH - 1] = '\0';
    symbol->type = type;
    symbol->scope_level = symbol_table.current_scope;
    symbol->line_declared = line_number;
    symbol->lines_used = malloc(sizeof(int));
    symbol->use_count = 0;
    symbol->is_initialized = 0;
    symbol->array_info.dim_count = 0;
    strcpy(symbol->value_str, "undefined");  // Initialize value as undefined

    if (type == TYPE_INT || type == TYPE_CHAR) {
        symbol->value.int_val = 0;  // Default value
    }

    symbol_table.symbol_count++;
    return 1;
}

int add_array_symbol(const char* name, DataType type, int line_number, int dimensions[], int dim_count) {
    if (!add_symbol(name, type, line_number)) {
        return 0;
    }

    Symbol* symbol = &symbol_table.symbols[symbol_table.symbol_count - 1];
    symbol->array_info.dim_count = dim_count;
    
    int total_size = 1;
    for (int i = 0; i < dim_count; i++) {
        symbol->array_info.dimensions[i] = dimensions[i];
        total_size *= dimensions[i];
    }

    // Allocate memory for array values
    symbol->value.array_vals = calloc(total_size, sizeof(int));
    sprintf(symbol->value_str, "array[%d]", total_size);
    
    return 1;
}

Symbol* lookup_symbol(const char* name) {
    // Search from innermost scope to outermost
    for (int scope = symbol_table.current_scope; scope >= 0; scope--) {
        for (int i = 0; i < symbol_table.symbol_count; i++) {
            if (symbol_table.symbols[i].scope_level == scope &&
                strcmp(symbol_table.symbols[i].name, name) == 0) {
                return &symbol_table.symbols[i];
            }
        }
    }
    return NULL;
}

void add_symbol_use(const char* name, int line_number) {
    Symbol* symbol = lookup_symbol(name);
    if (symbol != NULL) {
        symbol->use_count++;
        symbol->lines_used = realloc(symbol->lines_used, 
                                   symbol->use_count * sizeof(int));
        symbol->lines_used[symbol->use_count - 1] = line_number;
    }
}

void update_symbol_value(const char* name, void* value) {
    Symbol* symbol = lookup_symbol(name);
    if (symbol != NULL) {
        switch(symbol->type) {
            case TYPE_INT:
                symbol->value.int_val = *((int*)value);
                sprintf(symbol->value_str, "%d", symbol->value.int_val);  // Make sure this happens
                break;
            case TYPE_CHAR:
                symbol->value.char_val = *((char*)value);
                sprintf(symbol->value_str, "'%c'", symbol->value.char_val);
                break;
            default:
                break;
        }
        symbol->is_initialized = 1;  // Make sure initialization flag is set
    }
}
void update_array_element(const char* name, int indices[], int num_indices, int value) {
    Symbol* symbol = lookup_symbol(name);
    if (symbol != NULL && 
        (symbol->type == TYPE_INT_ARRAY || symbol->type == TYPE_CHAR_ARRAY)) {
        
        int index = 0;
        int multiplier = 1;
        
        // Calculate linear index for multi-dimensional array
        for (int i = num_indices - 1; i >= 0; i--) {
            index += indices[i] * multiplier;
            if (i > 0) {
                multiplier *= symbol->array_info.dimensions[i];
            }
        }
        
        symbol->value.array_vals[index] = value;
        // Update the string representation for the first few elements
        sprintf(symbol->value_str, "[%d, ...]", value);
    }
}

void print_symbol_table() {
    printf("\n=== Symbol Table ===\n");
    printf("%-15s %-10s %-8s %-8s %-15s %-15s %-15s\n", 
           "Name", "Type", "Scope", "Init", "Value", "Declared", "Used Lines");
    printf("--------------------------------------------------------------------------------\n");

    for (int i = 0; i < symbol_table.symbol_count; i++) {
        Symbol* sym = &symbol_table.symbols[i];
        printf("%-15s ", sym->name);
        
        // Print type
        switch(sym->type) {
            case TYPE_INT: printf("%-10s ", "int"); break;
            case TYPE_CHAR: printf("%-10s ", "char"); break;
            case TYPE_INT_ARRAY: printf("%-10s ", "int[]"); break;
            case TYPE_CHAR_ARRAY: printf("%-10s ", "char[]"); break;
        }

        // Print scope, initialization status, and value
        printf("%-8d %-8s %-15s ", 
               sym->scope_level,
               sym->is_initialized ? "yes" : "no",
               sym->value_str);

        // Print declaration line
        printf("%-15d ", sym->line_declared);

        // Print usage lines
        printf("[");
        for (int j = 0; j < sym->use_count; j++) {
            printf("%d", sym->lines_used[j]);
            if (j < sym->use_count - 1) printf(",");
        }
        printf("]\n");
    }
    printf("--------------------------------------------------------------------------------\n");
}

void free_symbol_table() {
    for (int i = 0; i < symbol_table.symbol_count; i++) {
        free(symbol_table.symbols[i].lines_used);
        if (symbol_table.symbols[i].type == TYPE_INT_ARRAY || 
            symbol_table.symbols[i].type == TYPE_CHAR_ARRAY) {
            free(symbol_table.symbols[i].value.array_vals);
        }
    }
}
