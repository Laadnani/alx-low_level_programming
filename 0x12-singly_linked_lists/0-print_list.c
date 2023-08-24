#include "lists.h"

/**
 * print_list - print a list of node params
 * @h: node to work on
 * Return: number of nodes worked on
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL || current->len == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%i] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
	return (count);
}
