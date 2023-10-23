#include "main.h"
/**
 * _puts - function taht print the string
 * @str: the string to be printed
 * Return: void nothing to return
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
