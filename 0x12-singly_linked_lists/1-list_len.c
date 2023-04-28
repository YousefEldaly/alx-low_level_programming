#include "lists.h"
/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: pointer to head element
 * Return: num of elements (success)
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *current;

	current = h;

	for (i = 0; current; i++)
		current = current->next;
	return (i);
}
