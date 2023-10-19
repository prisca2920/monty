#include "monty.h"

/**
 * swap - switches the top two nodes
 * @stack: the nodes to be checked
 * @line_number: line in a file
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode = *stack;
	stack_t *temp = *stack;

	if (!*stack || !stack || !newnode->next)
	{
		fprintf(stderr, "L%i: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	newnode = newnode->next;
	newnode->prev = NULL;

	temp->next = newnode->next;
	newnode->next = temp;
	(newnode->next)->prev = newnode;

	*stack = newnode;
}
