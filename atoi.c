#include "monty.h"

/**
 * _atoi - converts a string to integer
 * @str: parameter to be checked
 * @line_number: second int
 *
 * Return: an integer
 */

int _atoi(char *str, unsigned int line_number)
{
	int element = 0, i = 0;
	unsigned int real_int = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
	element = element * 10 + (str[i] - '0');
	real_int++;
	i++;
	}

	if (real_int != strlen(str) - 1)
	{
	fprintf(stderr "L%u: usage: push integer\n", line_number);
	exit(EXIT_FAILURE);
	}

	return (element);
}
