#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: the nodes in the stack
 * @line_number: a line in the file
 * Return: Nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%i: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next != NULL)
	{
		*stack = temp->next;
		(*stack)->prev = NULL;
		free(temp);
	}
	else
	{
		free(*stack);
		*stack = NULL;
	}
}
