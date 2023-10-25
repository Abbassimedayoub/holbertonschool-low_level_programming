#include "main.h"

/**
  * leet - Encodes a string into 1337
  * @s: The string to encode
  *
  * Return: The encoded string
  */
char *leet(char *s)
{
	int ln = 0, i, j = 0;
	char letre[5] = {'A', 'E', 'O', 'T', 'L'};
	char chifre[5] = {'4', '3', '0', '7', '1'};

	while (s[ln] != '\0')
	{
		ln++;
	}
	for (i = 0; i < ln; i++)
	{
		for (j = 0; j < 5; j++)
		{
		if (s[i] == letre[j] || s[i] - 32 == letre[j])
		{
			s[i] = chifre[j];
		}
		}
	}
	return (s);

}
