#include "main.h"

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: number ot evaluate
 *
 * Return: 1 if n is prime, or 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
 * _prime - determine if a number is prime
 * @n: number to evaluate
 * @m: iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */

int _prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0 && m > 0)
		return (0);
	return (_prime(n, m - 1));
}
