#include "main.h"
/**
 * print_last_digit - print the last digit
 * @n: the numbre to print his last digit
 *
 * Return: the last digit if a number
 */
int print_last_digit(int n)
{
	int l;

	if (n > 0)
	{
	l = n % 10;
	_putchar(l + '0');
	return (l);
	}
	else
	{
	l = (-n) % 10;
	_putchar(l + '0');
	return (l);
	}
}
