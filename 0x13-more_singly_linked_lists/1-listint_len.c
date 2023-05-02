#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in
 *		a linked listint_t list.
 * @h: pointer to first node in listint_t list.
 * Return: the number of elements in list_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t list_size = 0;

	while (h)
	{
		list_size++;
		h = h->next;
	}

	return (list_size);
}
