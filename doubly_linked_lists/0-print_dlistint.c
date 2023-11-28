#include "lists.h"
/**
 * print_dlistint - function that prints all list elements
 * @h: pointer to the element
 * Return: the numbre of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
