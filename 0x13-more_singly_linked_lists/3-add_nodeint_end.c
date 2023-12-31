#include "lists.h"

/**
 * add_nodeint_end - add a node to the end of the list
 * @head: pointer of the pointer tot the head
 * @n: element of the node not sure about using strdup though
 * Return: address of the new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
