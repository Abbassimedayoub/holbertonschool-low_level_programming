#include "lists.h"
/**
 * free_dlistint - function that free a list
 * @head: the list to bee freed
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
