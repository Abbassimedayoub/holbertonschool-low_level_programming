#include "main.h"
/**
 * _strlen - function that count the lenght of a string
 * @s: the string the string to be cheked
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
