#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: string
 */
char* _strstr(char* haystack, char* needle)
{
    int i, j, k;

    for (i = 0; haystack[i] != '\0'; i++)
    {
	    k = i;
	    j = 0;
        if (haystack[k] == needle[j])
        {
            for (j = 1; needle[j] != '\0'; j++)
            {
                if (needle[j] != haystack[k + j])
                {
                    break;
                }
            }
            if (needle[j] == '\0')
            {
                return &haystack[i];
            }
        }
    }

    return ('\0');
}

