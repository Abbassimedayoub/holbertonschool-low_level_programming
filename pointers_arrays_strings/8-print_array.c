#include "main.h"
#include <stdio.h>
/**
 * print_array - function taht prints the countent ofthe array of int
 * @a: the array
 * @n the array lenght
 * Return: nothing to return
 */
void print_array(int *a, int n)
{
	int i;

	    for (i = 0; i < n; i++)
	    {
		    if (i != (n - 1))
		    {
			    printf("%d, ", a[i]);
		    }
		    else
		    {			    
		    printf("%d", a[n - 1]);
		    }
	    }
			printf("\n");
}
