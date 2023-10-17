#include "main.h"
/**
 * times_table - diplay the pyhtagor table
 *
 * Return: pythagore table
 */
void times_table(void)
{
	int i,j, m;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (j != 0)
			{	
			_putchar(',');
			_putchar(' ');
			}
			if (m < 10 )
			{
				if (j != 0)
                                { 
					_putchar(' ');
				}
                        _putchar(m + '0');
                        }
			else
			{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
