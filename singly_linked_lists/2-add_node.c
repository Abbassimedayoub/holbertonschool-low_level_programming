#include "lists.h"
/**
 * add_node - function that add a node at the beging of a list
 * @head: the list
 * @str: the new list elements
 * Retrun: a list with a new elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
