#include "monty.h"

/**
 * _add - adds the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int addition, i, j;

	if (!*stack || !stack || !stack->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	i = (*stack)->n;

	j = (*stack)->next->n;

	addition = i + j;

	pop(stack, line_number);

	(*stack)->n = addition;
}
