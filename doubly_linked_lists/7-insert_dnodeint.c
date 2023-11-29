#include "lists.h"
/**
 * insert_dnodeint_at_index - function that insert
 * an element at an index
 * @h: the list double pointeur
 * @idx: the index to be updated
 * @n: the contenet of the list
 * Return: the adress of the nex node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *aux;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	aux = *h;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	return (add_dnodeint(h, n));
	for (i = 0; i < (idx - 1); i++)
	{
		if (aux == NULL)
		{
			free(new_node);
			return (NULL);
		}
		aux = aux->next;
	}
	if (aux->next != NULL)
		aux->next->prev = new_node;
	new_node->next = aux->next;
	new_node->prev = aux;
	aux->next = new_node;
	return (new_node);
}
