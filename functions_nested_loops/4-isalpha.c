#include "main.h"
/**
 * _isalpha - function that chek if thechar is alphabetic or no
 * @c: the char to be chekd
 *
 * Return: 1 if is it alpha 0 othewise
 */
int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
return (1);
else
return (0);
}
