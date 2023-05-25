#include "monty.h"

/**
 * _add - adds the top two elements of the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (!*stack || !stack || !temp->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	*temp = *stack;

	(temp->next)->n += temp->n;

	_pop(&temp, line_number);

	*stack = temp;
}
