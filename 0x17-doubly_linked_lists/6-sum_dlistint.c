#include "lists.h"

/**
 * sum_dlistint - sum the n of all nodes
 * @head: node to scan data of
 * Return: sum of all nodes n data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int i = 0;

	if (current == NULL)
	{
		return (i);
	}
	while (current->next != NULL)
	{
		i += current->n;
		current = current->next;
	}
	i += current->n;
	return (i);
}
