#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer of linstint_t linked list.
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	head_data = (temp)->n;
	free(temp);

	return (head_data);
}
