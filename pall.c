#include "monty.h"
/**
 * f_pall - Prints all the values on the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the opcode appears
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *stack;
	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
