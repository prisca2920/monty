#include "monty.h"

/**
 * search_opcodes - if an opcode is valid
 * Return: opcode (char *)
 */

void (*search_opcodes(void))(stack_t **, unsigned int)
{
	int i = 0, j;
	int op;
	int size;

	instruction_t opcodes[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};

	while (opcodes[i].opcode)
	{
		j = 0;
		op = 1;
		size = strlen(opcodes[i].opcode);
		while (j < size)
		{
			if (opcodes[i].opcode[j] != buff[j])
			{
				op = 0;
				break;
			}
			j++;
		}
		if (op == 1 && (buff[j] == '\n'
			|| buff[j] == ' ' || buff[j] == '\0'))
			break;
		i++;
	}
	return (opcodes[i].f);
}

/**
 * main - function main
 * @argc: variable int
 * @argv: variable char
 * Return: int
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	handle(argv[1]);
	return (0);
}
