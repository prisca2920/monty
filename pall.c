#include "monty.h"

/**
 * pall - prints all values on stack
 * @stack: the nodes to be checked
 * @line_number: the line to be checked
 * Return: all values
 */

void pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	while (*stack)
	{
		printf("%i\n", (*stack)->n);
		stack = &(*stack)->next;
	}
}
