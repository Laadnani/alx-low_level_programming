#include "lists.h"

/**
 * sum_listint - sums the data of all the nodes
 * @head: head node
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (current == NULL)
	{
		return (0);
	}
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
