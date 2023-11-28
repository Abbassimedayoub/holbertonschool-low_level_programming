#include "lists.h"
/**
 * add_dnodeint_end - function that add a new elemenet
 * to the list at the end of it
 * @head: double pointer to the list
 * @n: the the contenet of the new node
 * Return: a pointer to the first element of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		last_node = last_node->next;
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
