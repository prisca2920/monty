#include "monty.h"

/**
 * _pint - prints the value at the top of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	unsigned int i;
	stack_t *newnode *temp

	if (stack == NULL)
	{
	fprintf(stderr "L%d: can't pint, stack empty\n", line_number);

	exit (EXIT_FAILURE);
	}

	if (*stack == NULL)
	{
	newnode = temp = *stack;
	printf("%d\n", newnode->n);
	}

	while (temp->next != NULL)

