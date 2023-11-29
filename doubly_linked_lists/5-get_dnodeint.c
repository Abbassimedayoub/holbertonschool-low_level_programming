#include "lists.h"
/**
 * get_dnodeint_at_index - function that retrun a
 * poineter to the nth node
 * @head: the list
 * @index: the nth element of the list
 * Return: pointer to the nth element of the lsit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *aux = head;

	if (aux == NULL)
		return (NULL);
	for (i = 0; i < index && aux != NULL; i++)
		aux = aux->next;
	return (aux);
}
