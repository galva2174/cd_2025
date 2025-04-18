typedef struct expression_node
{
	char* val;
	struct expression_node* left;
	struct expression_node* right;
	
	/*needs 3 members
		i) pointer to the left child
		ii) pointer to the right child
		iii) string to store the value of the node
	*/
}expression_node;

expression_node* init_exp_node(char* val, expression_node* left, expression_node* right);
void display_exp_tree(expression_node* exp_node);
