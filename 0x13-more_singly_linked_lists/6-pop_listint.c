#include "lists.h"

/**
 * pop_listint - remoce the first node
 * @head: pointer to pointer of the head
 * Return: head data
 */

int pop_listint(listint_t **head)
{
	listint_t *plus_one;
	int last_seen;

	if (*head == NULL)
	{
		return (0);
	}
	plus_one = (*head)->next;
	last_seen = (*head)->n;
	free(*head);
	*head = plus_one;
	return (last_seen);
}
