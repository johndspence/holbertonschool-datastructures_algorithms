/* Add an element at the end of a double linked stack_t*/
int add_end_dl_stack_t(stack_t **stack, unsigned int line_number)
{
	/*char *stringcopy;*/
	stack_t *new_node_ptr;
	stack_t *current_node;

	/* Set stack to point to currentnode */
	stringcopy = strdup(str);
	if (stringcopy == NULL)
		return 1;

	new_node_ptr = malloc(sizeof(stack_t));
	if (new_node_ptr == NULL)
		return 1;
	new_node_ptr->n = global_integer;
	new_node_ptr->next = NULL;

	if (*stack == NULL)
	{
		*stack = new_node_ptr;
		new_node_ptr->prev = NULL;
	}
	else
	{
		current_node = *stack;
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = new_node_ptr;
		new_node_ptr->prev = current_node;
	}
	return 0;
}
