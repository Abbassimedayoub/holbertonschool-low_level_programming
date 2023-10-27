#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: the string to be converted
 * Return: an int
 */
int _atoi(char *s)
{
    int si = 1, i = 0, res = 0, stop = 0;

    while (s[i] != '\0')
    {
	    if (s[i] == '-')
	    {
		    si = -1;
	    }
	    while (s[i] <= '9' && s[i] >= '0')
	    {
		    stop = 1;
		    res = 10 * res + (s[i] - '0');
		    i++;
	    }
	    if (stop == 1)
	    {
		    break;
	    }
	    i++;
    }
return res * si;
}

