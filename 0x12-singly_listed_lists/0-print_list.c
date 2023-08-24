#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements on the nodes
 *@h:pointer to nodes with elements to print
 *Return: number of nodes included
 */

size_t print_list(const list_t *h)
{
	const list_t *current = h;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s \n", current->len, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
