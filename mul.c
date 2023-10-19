#include "monty.h"

/**
 * mul - multiply the top two elements
 * @stack: the elements to be checked
 * @line_number: line in a file
 * Return: the sum
 */

void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (!*stack || !stack || !temp->next)
	{
		fprintf(stderr, "L%i: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(temp->next)->n *= temp->n;

	pop(&temp, line_number);

	*stack = temp;
}
