#include "lists.h"

/**
 * dlistint_len - print the number of elements in a DLL
 * @h: DLL to scan
 * Return: number of DLLs
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *new = h;

	for (i = 0; new; i++)
	{
		new = new->next;
	}
	return (i);
}
