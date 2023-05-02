#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 *		of a listint_t linked list.
 * @head: pointer to first node of listint_t list.
 * Return: sum of all data in the list nodes;
 */
int sum_listint(listint_t *head)
{
	int data_sum = 0;

	while (head)
	{
		data_sum += head->n;
		head = head->next;
	}

	return (data_sum);
}
