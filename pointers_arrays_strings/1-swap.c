#include "main.h"
/*
 * swap_int - function tow reverse 2 int
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
