/* symbol_table.h */
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOL_LENGTH 32
#define MAX_SCOPE_DEPTH 100
#define MAX_SYMBOLS 1000
#define MAX_VALUE_LENGTH 100

typedef enum {
    TYPE_INT,
    TYPE_CHAR,
    TYPE_INT_ARRAY,
    TYPE_CHAR_ARRAY
} DataType;

typedef union {
    int int_val;
    char char_val;
    int* array_vals;  // Dynamic array for array values
} Value;

typedef struct {
    int dimensions[3];    // For array dimensions (0 if not array)
    int dim_count;       // Number of dimensions (0 for scalar)
} ArrayInfo;

typedef struct {
    char name[MAX_SYMBOL_LENGTH];
    DataType type;
    int scope_level;
    int line_declared;
    int *lines_used;     // Dynamic array of line numbers where variable is used
    int use_count;       // Number of times variable is used
    int is_initialized;
    ArrayInfo array_info;
    Value value;
    char value_str[MAX_VALUE_LENGTH];  // String representation of the value
} Symbol;

typedef struct {
    Symbol symbols[MAX_SYMBOLS];
    int symbol_count;
    int current_scope;
} SymbolTable;

// Symbol Table Operations
void init_symbol_table();
void enter_scope();
void exit_scope();
int add_symbol(const char* name, DataType type, int line_number);
int add_array_symbol(const char* name, DataType type, int line_number, int dimensions[], int dim_count);
Symbol* lookup_symbol(const char* name);
void add_symbol_use(const char* name, int line_number);
void update_symbol_value(const char* name, void* value);
void update_array_element(const char* name, int indices[], int num_indices, int value);
void print_symbol_table();
void free_symbol_table();

#endif /* SYMBOL_TABLE_H */
