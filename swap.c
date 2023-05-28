#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	unsigned int a, b;
	(void) line_number;

	if (!stack || !*stack || !(*stack)->next)
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	a = (*stack)->n;
	b = (*stack)->next->n;

	(*stack)->n = b;
	(*stack)->next->n = a;
}
