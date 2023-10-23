#include "main.h"
/**
 * strlen - function that count the lenght of a string
 * @s: the string the string to be cheked
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while(*s[i] != '\0')
		i++;
	return (i);
}
