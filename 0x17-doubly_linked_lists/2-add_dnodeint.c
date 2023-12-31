#include "lists.h"

/**
 * add_dnodeint - adds a new node to the index 0 of the DLLs
 * @head: the DLL to enter data onto
 * @n: data for the DLLs
 * Return: adress of the new DLL or Null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
