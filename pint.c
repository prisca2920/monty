#include "monty.h"

/**
 * _pint - prints the value at the top of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (!stack || !*stack)
	{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);

	exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);

}

