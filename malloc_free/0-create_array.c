#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that create an array with
 * allocted memory
 * @size: the size of the array
 * @c: the char to be filed in tha array
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = (char *)malloc(size);
	/* malloc = size because the size of char is 1 and sizeof(char) * 1 = size*/
	if (ptr == NULL)
		return (0);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
	free(ptr);
}
