#include "main.h"
/**
 * factorial - the factorial of a given number.
 * @n: the number to search his factorial
 * Return: the favtorial number of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n - 1) * n);
}
