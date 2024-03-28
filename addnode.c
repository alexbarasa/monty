#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: head of the stack
 * @num: new_value
 * Return: no return
*/
void addnode(stack_t **head, int nun)
{

	stack_t *new_node, *ptr;

	ptr = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (ptr)
		ptr->prev = new_node;
	new_node->num = num;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
