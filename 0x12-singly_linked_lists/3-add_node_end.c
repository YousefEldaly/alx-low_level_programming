#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head pointer
 * @str: str to add as data in new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current = *head;
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else {
		while (current->next != NULL)
			current = current->next;

		current->next = new_node;
	}

	return (new_node);
}	
