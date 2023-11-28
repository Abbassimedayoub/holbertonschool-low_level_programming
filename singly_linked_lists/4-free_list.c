#include "lists.h"
/**
 * free_list - function that free a list
 * @head: the list to be freed
 * Return: nothing to return
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head->str);
		free(head);
		head = aux;
	}
}
