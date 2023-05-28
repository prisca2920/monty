#include "monty.h"

/**
 * push - adds an element to top stack
 * @stack: struct to be checked
 * @line_number: int to be checked
 * Return: 0 success
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;
	(void) line_number;

	newnode = malloc(sizeof(stack_t));

	if (!newnode)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	newnode->prev = NULL;

	if (*stack == NULL)
	{
		newnode->next = NULL;
	}
	else
	{
		(*stack)->prev = newnode;
		newnode->next = *stack;
	}
	*stack = newnode;
}
