#include "lists.h"

size_t print_list(const list_t *h)
{
	int i;
	const list_t *current;

	current = h;

	if (current == NULL)
		return (0);

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
