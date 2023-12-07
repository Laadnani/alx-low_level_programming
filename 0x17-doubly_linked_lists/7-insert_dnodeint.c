#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at spec index
 * @h: head pointer
 * @idx: index to specify
 * @n: node data
 * Return: address of new node on succ or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp1 = *h;
	dlistint_t *new;
	unsigned int i = 0;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (i != idx - 1)
	{
		temp1 = temp1->next;
		if (temp1 == NULL)
		{
			return (NULL);
		}
		i++;
	}
	if (temp1->next == NULL)
	{
		return (NULL);
	}
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = temp1;
	new->next = temp1->next;
	temp1->next->prev = new;
	temp1->next = new;
	return (new);
}
