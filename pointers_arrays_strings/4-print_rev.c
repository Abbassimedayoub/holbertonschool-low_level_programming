#include "main.h"
/**
 * print_rev - prints the string reversed
 * @s: the string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 1; i--)
		_putchar(s[i]);
}
