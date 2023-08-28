#include "lists.h"

/**
 * insert_nodeint_at_index - sinsert a new node at given index
 * @head: head of the list working with
 * @idx: index of the new node if possible
 * @n: data of the new node
 * Return: address of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = *head;
	listint_t *temp;
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!new_node)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (i < idx - 1)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = new_node;
	new_node->n = n;
	new_node->next = temp;
	return (new_node);
}
