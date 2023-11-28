#include "lists.h"
/**
 * list_len - function that return the lenght of a list
 * @h: the list to be treated
 * Return: the lenght of the list h
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
