#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to fisrt element
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);
}
