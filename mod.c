#include "monty.h"

/**
 * _mod - rem of the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	int modulus, i, j;

	if (!*stack || !stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero/n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;

	j = (*stack)->next->n;

	modulus = j % i;

	pop(stack, line_number);

	(*stack)->n = modulus;
}
