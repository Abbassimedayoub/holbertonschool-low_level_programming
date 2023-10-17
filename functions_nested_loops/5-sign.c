#include "main.h"
/**
 * print_sign - function that prints the sing of number
 * @n: the number to be cheket
 *
 * Return: 1 if it is positive -1 if negative 0 if it zero
 */
int print_sign(int n)
{
if (n < 0)
	return (-1);
else if (n > 0)
	return (1);
else
	return (0);
}
