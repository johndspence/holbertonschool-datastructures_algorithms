#include "monty.h"

int manage_funcs(stack_t **stack, unsigned int line_number, char *opcode)
{
	int i;
	int ret;

	instruction_t f[] =
	{
		{"push", &add_begin_dl_list},
		/*{"pall", &pall_stack},
		{"pint", &pint_func},
		{"pop", &pop_func},
		{"swap", &swap_func},
		{"add", &add_func},
		{"nop", &nop_func},
		{"sub", &sub_func},
		{"div", &div_func},
		{"#", &com_func},
		{"pchar", &pchar_func},
		{"pstr", &pstr_func},
		{"rotl", &rotl_func},
		{"rotr", &rotr_func},
		{"stack", &stack_func},
		{"queue", &queue_func},*/
		{'\0', '\0'}
	};

	i = 0;

	while (f[i].opcode != '\0')
	{
		if (opcode == f[i].opcode)
		{
			ret = f[i].func(stack, line_number);
			return (ret);
		}
		i++;
	}
return (0);
}
