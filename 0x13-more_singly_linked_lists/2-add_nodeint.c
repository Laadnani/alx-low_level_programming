#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node to the beginning of a list
 * @head: pointer to the pointer of the head
 * @n: data of the new node
 * Return: address of the new node or Null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
