#include "function_pointers.h"

/**
 * print_name - Function that print a name
 *@name: Parameter of the func
 *@f: Pointer to a func
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
		(f)(name);
}
