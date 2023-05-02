#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to first node.
 * @index: index of the required node.
 * Return: the located node,
 * if DNE NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current_node;

	for (current_node = 0; current_node < index; current_node++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
