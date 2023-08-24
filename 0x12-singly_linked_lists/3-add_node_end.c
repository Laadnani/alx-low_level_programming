#include "lists.h"

/**
 * add_node_end - add a node to the end of the linked list
 * @head: pointer of the new node
 * @str: data of the new node
 * Return: address of the new node or Null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *current = *head;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	for (; str[len]; len++)
		;
	new_node->len = len;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
	} else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
