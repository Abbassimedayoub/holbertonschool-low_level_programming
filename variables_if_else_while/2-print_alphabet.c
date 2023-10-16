#include <stdio.h>
/**
 * main - Prints all letters from a to z
 *
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
