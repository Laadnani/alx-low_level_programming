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
	dlistint_t *current;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	while(current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	return (new);
}
