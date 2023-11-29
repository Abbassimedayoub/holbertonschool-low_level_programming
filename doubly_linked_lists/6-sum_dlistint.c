#include "lists.h"
/**
 * sum_dlistint - function that return the sum
 * of all the data
 * @head: the list
 * Return: the sum of the elments of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
