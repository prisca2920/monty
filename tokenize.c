#include "monty.h"

/**
 * _tokenize - splits a string
 * @str: the string to be checked
 * @delim: the separator
 * Return: the tokenized str
 */

char **_tokenize(char *str, char *delim)
{
	char *sentence, **token;
	int i = 0;

	sentence = strtok(str, delim);
	token = (char **)_calloc(100, sizeof(char *));

	if (!token)
	{
		free(token);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (sentence)
	{
		token[i] = sentence;
		sentence = strtok(NULL, delim);
		i++;
	}
	return (token);
}
