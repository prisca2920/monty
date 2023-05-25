#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!stack || !*stack)
	{
	fprintf(stderr "L%u: can't pop an empty stack\n" line_number);
	exit(EXIT_FAILURE);
	}

	*temp = NULL;

	temp = (*stack)->next;
	free(*stack);
	*stack = temp;

	if (!*stack)

	return;

	(*stack)->prev = NULL;
}
