#include "monty.h"

/* Add an element at the beginning of a double linked stack_t: */

/* should be void push_stack(stack_t **stack, unsigned int line_number)
also need to deal with extern int global_integer*/
void add_begin_dl_stack_t(stack_t **stack, unsigned int line_number)
{
	/*char *stringcopy;*/
	stack_t *new_node_ptr;
	stack_t *current_node;

	/*stringcopy = strdup(str);
	if (stringcopy == NULL)
		return 1;*/

	new_node_ptr = malloc(sizeof(stack_t));
	if (new_node_ptr == NULL)
		printf("Error: malloc failed\n";
		exit (EXIT_FAILURE);
	new_node_ptr->n = global_integer;
	new_node_ptr->prev = NULL;

	if (*stack == NULL)
	{
		new_node_ptr->next = NULL;
	}
	else
	{
		current_node = *stack;
		current_node->prev = new_node_ptr;
		new_node_ptr->next = *stack;
	}
	*stack = new_node_ptr;
}
