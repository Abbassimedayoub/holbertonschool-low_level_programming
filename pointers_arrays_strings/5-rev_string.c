#include "main.h"
/**
 * rev_string - function that reverse a string
 * @s: the string to be reversed
 * Return: nothing to return
 */
void rev_string(char *s)
{
	int ln = 0, i;
	char aux;

	while (s[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < (ln / 2); i++)
	{
		aux = s[i];
		s[i] = s[(ln - i - 1)];
		s[(ln - i - 1)] = aux;
	}
}
