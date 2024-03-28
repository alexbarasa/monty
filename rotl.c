#include "monty.h"
/**
  *f_rotl- rotates the stack to the top
  *@head: stack head
  *@line_number: line_number
  *Return: no return
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int line_number)
{
	stack_t *tmp = *head, *num;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	num = (*head)->next;
	num->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = num;
}
