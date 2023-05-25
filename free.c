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
