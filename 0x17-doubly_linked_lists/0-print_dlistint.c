#include "lists.h"

/**
 * print_dlistint - prints all elements in DL lists
 * @dlistint_t: DL struct to print
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *new = h;

	for (i = 0; new; i++)
	{
		printf("%d\n", new->n);
		new = new->next;
	}
	return (i);
}
