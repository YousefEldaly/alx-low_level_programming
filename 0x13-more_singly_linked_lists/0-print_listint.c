#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to head.
 *
 * Return: num of nodes.
 */
size_t print_listint(const listint_t *head)
{
	size_t numOfNodes = 0;

	while (head)
	{
		numOfNodes++;
		printf("%d\n", head->data);
		head = head->next;
	}

	return (numOfNodes);
}
