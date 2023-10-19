#include "monty.h"

/**
 * pint - prints the value at the top
 * @stack: the nodes on the stack
 * @line_number: line on a file
 * Return: the top value
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%i: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*stack)->n);
}
