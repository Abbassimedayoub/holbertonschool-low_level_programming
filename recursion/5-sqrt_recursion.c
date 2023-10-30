#include "main.h"
/**
 * checksqrt - function that returns the natural
 * square root of a number
 * @a: the number to serach his natural sqrt
 * @b: the number
 * Return: the sqrt number
 */
int _checksqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	if (b * b > a)
	{
		return (-1);
	}
	return (_checksqrt(a, b + 1));
}
/**
* _sqrt_recursion - function Returns the natural square root of a number
* @n:parameter of the function
*
* Return: natural square on an int
*/
int _sqrt_recursion(int n)
{
	return (_checksqrt(n, 1));
}
