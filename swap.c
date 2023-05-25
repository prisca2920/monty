#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	stack_t *newnode;

	if (!stack || !*stack || !temp->next)
	{
	fprintf(stderr "L%u: can't swap, stack too short," line_number);
	exit(EXIT_FAILURE);
	}

	*stack = *temp = *newnode;
	temp = temp->next;
	temp->prev = NULL;

	newnode->next = temp->next;
	temp->next = newnode;
	(temp->next)->prev = temp;

	*stack = temp;
}
