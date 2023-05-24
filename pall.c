#include "monty.h"

/**
 * _pall - prints all the values on the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	unsigned int i;

	for (i = 0; i <= line_number - 1; i++)
	{
	while (stack != NULL)
	{
	_pall(i + 1);
	printf("%d", i);
	}
	}

	return (0);
}
