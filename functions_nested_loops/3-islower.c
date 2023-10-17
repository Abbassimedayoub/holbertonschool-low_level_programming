#include "main.h"
/**
 * _islower - function that cheks if the char is lower or upper
 * @c: the char to be cheket
 *
 * Return: if it is lower return 1 0 other wise
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
	return (1);
	}
	else
	return (0);
}
