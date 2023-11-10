#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function taht conatct 2 strings
 * @s1: the 1st dtring
 * @s2: the 2nd string
 * @n: the number of char
 * Return: a string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *str;
    unsigned int i, j, k;
    unsigned int len1, len2;

    len1 = 0;
    len2 = 0;

    if (s1 != NULL) {
        len1 = strlen(s1);
    }
    if (s2 != NULL) {
        len2 = strlen(s2);
    }

    if (n > len2)
        n = len2;

    str = malloc(sizeof(char) * (len1 + n + 1));
    if (str == NULL)
        return (NULL);

    for (i = 0; s1 != NULL && i < len1; i++)
    {
        str[i] = s1[i];
    }

    for (j = 0, k = i; s2 != NULL && j < n; j++, k++)
    {
        str[k] = s2[j];
    }

    str[k] = '\0';
    return (str);
}
