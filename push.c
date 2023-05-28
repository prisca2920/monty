#include "monty.h"

/**
 * _push - pushes an element to the stack.
 * @stack: - struct to be checked
 * @line_number: integer to be checked
 * Return: 0 success
 */

void _push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;
	char *element;
	int i;

	for (i = 0; element[i] != '\0'; i++)
	{
	if (element[0] == '-' && i == 0)
	continue;

	if (isdigit(element[i]) == 0 || element == NULL)
	{
	fprintf(stderr, "L%d: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}
	}

	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
	fprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
	}

	newnode->n = atoi(element);
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*stack != NULL)
	{
	newnode->next = *stack;
	(*stack)->prev = newnode;
	}
	*stack = newnode;
}
