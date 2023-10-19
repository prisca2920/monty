#include "monty.h"

/**
 * _calloc - allocates space
 * @nmemb: the array to be checked
 * @size: the size available
 * Return: space or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (; i < (nmemb * size); i++)
		ptr[i] = 0;

	return (ptr);
}
