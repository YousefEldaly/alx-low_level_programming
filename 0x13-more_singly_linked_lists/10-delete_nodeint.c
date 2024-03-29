#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 *		index "index" of a listint_t linked list.
 *
 * @head: pointer to head pointer of listint_t linked list.
 * @index: index to remove node at
 * Return: 1 if it succeeded, -1 if it failed.
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copy = *head;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	index--;

	while (index--)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}

	temp = copy->next;
	copy->next = temp->next;
	free(temp);

	return (1);
}
