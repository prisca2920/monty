/**
 * _free - deletes a stack
 * @head: parameter to be checked
 * Return: 0 success
 */
void _free(stack_t *head)
{
	stack_t *temp = head;

	if (temp == NULL)
		return;

	while (head)
	{
	temp = head;
	head = head->next;
	free(temp);
	}
	free(head);
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
