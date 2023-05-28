#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int node_a, node_b;

	if (!stack || !*stack || !(*stack)->next)
	{
	fprintf(stderr "L%u: can't swap, stack too short," line_number);
	exit(EXIT_FAILURE);
	}

	node_a = (*stack)->n;
	node_b = (*stack)->next->n;

	(*stack)->n = node_b;
	(*stack)->next->n = node_a;
}
