#include "main.h"
/**
 * swap_int - check the code
 * @a: character to be checked
 * @b: character to be checked
 * Return: the value of two integers
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *b;
	*b = *a;
	*a = aux;

}
