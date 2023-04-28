#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to head node
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t i;
	const list_t *current;

	current = h;

	for (i = 0; current; i++)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
	}
	return (i);
}
