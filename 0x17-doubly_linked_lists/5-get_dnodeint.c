#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at index given
 * @head: first node to start with
 * @index: index of the node to return
 * Return: the node at index n or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	return (current);
}
