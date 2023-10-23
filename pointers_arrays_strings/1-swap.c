#include "main.h"
/*
 * swap_int - function that switch tow number
 * @a: the first int
 * @b: the second number
 * Return: nothing to return void
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;

}
