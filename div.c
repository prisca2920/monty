#include "monty.h"

/**
 * _div - adds the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int division, i, j;

	if (!*stack || !stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;

	j = (*stack)->next->n;

	division = j / i;

	pop(stack, line_number);

	(*stack)->n = division;
}
