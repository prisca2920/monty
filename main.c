#include "monty.h"

/**
 * main - the entry point
 * @argc: cmd argument count
 * @argv: cmd argument vector
 * Return: 0 always success
 */

int main(int argc, char **argv)
{
	FILE *fp;
	stack_t *stack = NULL;
	char *line = NULL, *opcode, *n;
	unsigned int line_number;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line_number = 0;
	while ((read = getline(&line, &len, fp) != -1))
	{
		line_number++;
		opcode = strtok(line, DELIMS);

		if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
			continue;

		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, DELIMS);
			_push(&stack, line_number, n);
		}
		else
			check_op(opcode, &stack, line_number);
	}
	_more_free(stack, line, fp);
	return (EXIT_SUCCESS);
}
