#include "lists.h"
#include <stdio.h>

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: pointer to head node of listint_t list.
 * Return: number of listint_t list nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t list_size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_size++;
	}

	return (list_size);
}
