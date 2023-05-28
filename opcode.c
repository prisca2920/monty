#include "monty.h"

/**
 * check_op - executes monty
 * @str: str with opcode
 * @stack: struct to be checked
 * @line_number: int to be checked
 * Return: the monty bytes
 */
int check_op(char *str, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", _mod},
		{NULL, NULL}
	};
	int i = 0;

	for (; ops[i].opcode != NULL; i++)
	{
		if (strcmp(str, ops[i].opcode) == 0)
		{
			(ops[i].f)(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, str);
	exit(EXIT_FAILURE);
}
