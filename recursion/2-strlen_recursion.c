#include "main.h"
/**
 * _strlen_recursion - function that returns the length
 * of a string
 * @s: the string to calculate her lenght
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
