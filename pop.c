#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @line_number: line_number
 * Return: no return
*/
void f_pop(stack_t **head, unsigned int line_number)
{
	stack_t *current;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current = *head;
	*head = current->next;
	free(current);
}
