#include "lists.h"

/**
 * listint_len - returns the number of elements in
 *	a linked listint_t list.
 * @h: pointer to head of a the linked list.
 *
 * Return: number of elements in linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		numOfNodes++;
		h = h->next;
	}

	return (numOfNodes);
}
