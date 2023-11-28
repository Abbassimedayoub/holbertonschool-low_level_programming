#include "lists.h"
/**
 * dlistint_len - funtion that return the numbre
 * of elements of a doublt liknke list
 * @h: pointer to the list
 * Return: the numb of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
