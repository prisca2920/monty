#include "monty.h"

/**
 * _sub - adds the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int subtraction, i, j;

	if (!*stack || !stack || !stack->next)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;

	j = (*stack)->next->n;

	subtraction = j - i;

	pop(stack, line_number);

	(*stack)->n = subtraction;
}
