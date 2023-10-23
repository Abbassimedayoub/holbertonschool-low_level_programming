#include "main.h"
/**
 * puts2 - fuction that print one char and hide the othe
 * @str: the string to be working on
 * Return: nothing
 */
void puts2(char *str)
{
	int i, ln = 0;

	while (str[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i <= ln; i+=2)
	{
		_putchar(str[i]);
	}
_putchar('\n');
}
