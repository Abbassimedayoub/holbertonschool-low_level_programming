#include "main.h"
/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase.
 * @s: the string to work on
 * Return: char  with all letter upper
 */
char *string_toupper(char *s)
{
	int ln = 0, i;

	while (s[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
