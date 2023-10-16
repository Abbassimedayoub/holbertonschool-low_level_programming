#include <stdio.h>
/**
 * main - Prints all single numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(i + '0');
		}
	}
	putchar('\n');
	return (0);
}
