#include "lists.h"

/**
 * free-list - free the memory of all the nodes
 * @head: node address pointer
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
