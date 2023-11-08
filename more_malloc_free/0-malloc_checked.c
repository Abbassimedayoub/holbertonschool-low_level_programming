#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the int to be cheked
 * Return: nothing to return
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
