#include "lists.h"

/**
 * get_nodeint_at_index - get a node at its index
 * @head: head node
 * @index: index of the node looked for
 * Return: node pointed to by index or Null if none
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (current->next == NULL && i < index)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	return (current);
}
