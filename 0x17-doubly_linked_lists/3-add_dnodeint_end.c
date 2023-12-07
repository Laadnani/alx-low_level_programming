#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of the DLL
 * @head: the new node head
 * @n: data of the node
 * Return: address of the new node or Null in unsuccesfull
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
