#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that return a duplucated string
 * @str: the string to be duplicated
 * Return: a duplucated srtring
 */
char *_strdup(char *str)
{
	char *ptr;
	if (str == NULL)
		return (NULL);
	ptr = (char *)malloc(strlen(str) + 1);
	if (ptr == NULL)
		return (0);
	strcpy(ptr, str);
	return (ptr);
	free(ptr);
}
