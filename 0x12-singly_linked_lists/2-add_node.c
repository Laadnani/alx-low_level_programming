#include "lists.h"

/**
 * add_node - add a node to the linked list
 *@head: pointer the the new node of the list
 *@str: string of the new node
 *Return: the adress of the new node or NULL if allocation fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added = *head;
	unsigned int length = 0;
	added = (list_t *) malloc(sizeof(list_t));

	added->str = strdup(str);
	for(; str[length]; length++)
		;
	added->len = length;
	added->next = *head;
	*head = added;
	if (added == NULL)
		return (NULL);
	return(added);
}
