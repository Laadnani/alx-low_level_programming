#include "lists.h"

/**
 *free_listint - free the allocated memories
 *@head: allocated nodes
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *temp;

	while (current->next != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	free(current);
}
