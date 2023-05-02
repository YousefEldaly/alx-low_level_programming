#include "lists.h"
/**
 * insert_nodeint_at_index - nserts a new node
 *		at a given position.
 *
 * @head: pointer to head pointer of listint_t list.
 * @idx: index to add data the new node at.
 * @n: data of new node
 *
 * Return: the address of the new node,
 *	or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node = *head, *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
		/*
		 * add_nodeint(head, n);
		 * we can reuse this func if we compile with its c file
		 */
	}
	idx--;
	while (idx--)
	{
		if (current_node == NULL || current_node->next == NULL)
			return (NULL);
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
