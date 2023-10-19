#include "monty.h"

/**
 * pall - prints all values on stack
 * @stack: the nodes to be checked
 * @line_number: the line to be checked
 * Return: all values
 */

void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;
	(void)line_number;

	newnode = *stack;
	if (newnode == NULL)
	{
	return;
	}

	while (newnode != NULL)
	{
		printf("%d\n", newnode->n);
		newnode = newnode->next;
	}
}
