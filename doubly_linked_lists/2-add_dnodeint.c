#include "lists.h"
/**
 * add_dnodeint - function that add a new element to the
 * list
 * @head: pointer to the list to be add on
 * @n: the contenet of the new elemnts
 * Return: pointer to the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = *head;
	if ((*head) != NULL)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
