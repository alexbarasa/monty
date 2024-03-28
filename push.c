#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"
/**
 * push - Pushes an element to the stack
 * @stack: Pointer to the stack
 * @line_number: Line number where the opcode appears
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	char *token;
	int num;
	stack_t *new_node;

	token = strtok(NULL, " ");
	if (token == NULL || !isdigit(*token))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(token);
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
