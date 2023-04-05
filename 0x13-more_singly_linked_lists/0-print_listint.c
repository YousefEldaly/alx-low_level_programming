#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head.
 *
 * Return: num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t numOfNodes = 0;

	while (h)
	{
		numOfNodes++;
		printf("%d\n", h->data);
		h = h->next;
	}

	return (numOfNodes);
}
