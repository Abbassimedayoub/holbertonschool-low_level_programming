#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest: the string
 * @char: the string to be copied
 * @n: the number of char to be copied
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int ln1 = 0, i;

	while (dest[ln1] != '\0')
	{
		ln1++;
	}
	for (i = 0; i < n && src [i] != '\0'; i++)
	{
		dest[ln1 + i] = src[i];
	}
	dest[ln1 + n] = '\0';
	return (dest);

}
