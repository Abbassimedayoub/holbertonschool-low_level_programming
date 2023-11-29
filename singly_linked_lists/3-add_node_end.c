#include "lists.h"
/**
 * add_node_end - function that add a new node at the end of the list
 * @head: a double pointer to the list
 * @str: the contenet of the new list added
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_node, *aux;

	end_node = malloc((sizeof(list_t)));
	if (end_node == NULL)
	{
		free(end_node);
		return (NULL);
	}
	end_node->next = NULL;
	if (str == NULL)
	{
		end_node->str = NULL;
		end_node->len = 0;
	}
	else
	{
		end_node->str = strdup(str);
		end_node->len = strlen(str);
	}
	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	aux->next = end_node;
	}
	return (end_node);
}
