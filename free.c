#include "monty.h"

/**
 * free_stack - deletes the node on the list
 * @head: the nodes
 */

void free_stack(stack_t *head)
{
	stack_t *stack;

	while (head)
	{
		stack = head->next;
		free(head);
		head = stack;
	}
}
