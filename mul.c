#include "monty.h"

/**
 * _mul - times the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	int multiplication, i, j;

	if (!*stack || !stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;

	j = (*stack)->next->n;

	multiplication = i * j;

	pop(stack, line_number);

	(*stack)->n = multiplication;
}
