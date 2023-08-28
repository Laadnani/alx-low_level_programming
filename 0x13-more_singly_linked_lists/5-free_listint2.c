#include "lists.h"

/**
 * free_listint2 - free the allocated memory of nodes
 * @head: pointer toi pointer of head node
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *temp;

	if (*head == NULL)
	{
		free(current);
	}
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
	*head = NULL;
	free(current);
}
