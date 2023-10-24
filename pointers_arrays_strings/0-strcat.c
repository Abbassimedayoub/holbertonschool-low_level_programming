#include "main.h"
/**
 * _strcat - function taht concrate tow strings
 * @dest: the destination string
 * @src: the sting to be concrtaed to the first one
 * Return: a concrated string
 */
char *_strcat(char *dest, char *src)
{
	int ln1 = 0, ln2 = 0, i;
	while (dest[ln1] != '\0')
	{
		ln1++;
	}
	while (src[ln2] != '\0')
	{
		ln2++;
	}
	for (i = 0; i < ln2; i++)
	{
		dest[ln1 + i] = src[i]; 
	}
	dest[ln1 +ln2] = '\0';
	return (dest);

}
