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
	ssize_t _open;
	stack_t *stack = NULL;
	char *ln = NULL, *opcode, *i;
	unsigned int ln_no;
	size_t count = 0;

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
	ln_no = 0;
	while ((_open = getline(&ln, &count, fp) != -1))
	{
	ln_no++;
	opcode = strtok(ln, DELIMS);

	if (opcode == NULL || strncmp(opcode, "#", 1) == 0)
	continue;

	if (strcmp(opcode, "push") == 0)
	{
	i = strtok(NULL, DELIMS);
	_push(&stack, ln_no, i);
	}
	else
	check_op(opcode, &stack, ln_no);
	}
	_more_free(stack, ln, fp);
	return (EXIT_SUCCESS);
}
