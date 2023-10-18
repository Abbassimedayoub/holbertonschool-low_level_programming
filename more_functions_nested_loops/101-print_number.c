#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	unsigned int num = n; /* to convert n into his absulte value the manipulate it easly */

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10); /* rpeat the function till num < 0 */

	_putchar((num % 10) + '0');
}
