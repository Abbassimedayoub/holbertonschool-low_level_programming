#include "main.h"
/**
 * _strcpy - function that copy a string to another
 * @dest: destination string
 * @src: the string to be copied
 * Return: a string basic one and the copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
