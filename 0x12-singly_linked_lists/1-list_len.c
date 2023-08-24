#include "lists.h"

/**
 * list_len - return number of elements printed
 * @h: nodes to work on
 * Return: number of elements in a node
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
