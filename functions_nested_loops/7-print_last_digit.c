#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the numbre to print his last digit
 *
 * Return: the last digit if a number
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n > 0)
	{
	_putchar(n + '0');
	return (n);
	}
	else
	{
	n = (-1) * n;
	_putchar(n + '0');
	return (n);
	}
}
