#include "lists.h"

/**
 * reverse_recursive - handle the reversing of the nodes
 * @current: current pointer to next
 * @next: pointer that will be the pointer to the next node
 * Return: pointer of the new last node
 */
listint_t *reverse_recursive(listint_t *current, listint_t *next)
{
	listint_t *temp;

	if (current == NULL)
	{
		return (next);
	}
	temp = (*current).next;
	(*current).next = next;
	return reverse_recursive(temp, current);
}

/**
 * reverse_listint - return of the recusing handler
 * @head: head of the list we will work on
 * Return: pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	return (reverse_recursive(*head, NULL));
}

