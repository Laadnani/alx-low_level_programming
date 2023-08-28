#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints lists of elements on the nodes
 * @h: pointer to the current node
 * Return: count of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
