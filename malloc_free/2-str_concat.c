#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that contact tow strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: a str
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j;

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);
	/* size of char = 1 */
	if ( ptr == NULL)
		return(NULL);
	for (i = 0; i < strlen(s1); i++)
		ptr[i] = s1[i];
	for(j = 0; j < strlen(s2); j++)
		ptr[i + j] = s2[j];
	ptr[i + j + 1] = '\0';
	return(ptr);
	free(ptr);
}
