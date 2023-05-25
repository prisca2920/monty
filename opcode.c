#include "monty.h"

/**
 * check_op - check opcode
 * @str: opcode command
 * Return: a pointer to func
 */
void (*check_op(char *str))(stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (ops[i].opcode && strcmp(str, ops[i].opcode) != 0)
		i++;
	if (ops[i].opcode == NULL)
		return (NULL);
	return (ops[i].f);
}

