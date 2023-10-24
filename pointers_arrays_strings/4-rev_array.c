#include "main.h"
/**
 * reverse_array - function that reverses
 * the content of an array of integers
 * @a: the array
 * @n: the lenght of the array
 * Return: a reversed array
 */
void reverse_array(int *a, int n)
{
	int aux, i;

	for (i = 0; i < n / 2; i++)
	{
	aux = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = aux;
	}
}
