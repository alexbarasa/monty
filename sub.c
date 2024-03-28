#include "monty.h"
/**
 * f_sub- sustration
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int line_number)
{
	stack_t *num;
	int sub, nodes;

	num = *head;
	for (nodes = 0; num != NULL; nodes++)
		num = num->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	num = *head;
	sub = num->next->n - num->n;
	num->next->n = sub;
	*head = num->next;
	free(num);
}
