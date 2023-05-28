#include "monty.h"

/**
 * _free - deletes a stack
 * @stack: parameter to be checked
 * Return: 0 success
 */
void _free(stack_t **stack)
{
	stack_t *temp;

	while (*stack)
	{
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
	}
}

/**
 * _more_free - frees stack, line and file
 * @stack: the struct
 * @line: the line to free
 * @fp: the file to free
 */
void _more_free(stack_t *stack, char *line, FILE *fp)
{
	if (stack != NULL)
	{
	_free(&stack);
	}

	free(line);
	fclose(fp);
}
