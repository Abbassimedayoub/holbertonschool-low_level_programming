#include "main.h"
/**
 * _prime_finder - function that chek if the number is prime
 * @a: the numeber
 * @b: the division cheks
 * Return: 0 is not prime 1 is a primenumber
 */
int _prime_finder(int a, int b)
{
	if (a == b)
		return (1);
	if (a % b == 0)
		return (0);
       return (_prime_finder(a, b + 1));	
}
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0
 * @n: the number to be cheket if he is prime or not
 * Return: 1 if is prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return 0;
	return (_prime_finder(n, 2));
}
