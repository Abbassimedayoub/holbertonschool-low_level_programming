#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function taht conatct 2 strings
 * @s1: the 1st dtring
 * @s2: the 2nd string
 * Return: a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int j, i, ln, ln2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (strlen(s2) >= n)
		ln2 = n;
	else
		ln2 = strlen(s2);
	ln = ln2 + strlen(s1);
	str = malloc(sizeof(char) * ln + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < ln2; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i + 1] = '\0';


	return (str);
}
