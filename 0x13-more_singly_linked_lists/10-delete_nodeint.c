#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given index
 * @head: pointer to the head node
 * @index: given index of the node to delete
 * Return: 1 on success or -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (i < index - 1)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
