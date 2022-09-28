#include "main.h"

/**
 * _sqrt_recursion - returns the natural
 * square root of a number
 * @n: number to determine sqaure root
 * 
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - determine square root of a number
 * @n: number to determine square root
 * @m: mutiple of n
 * 
 * Return: square root of m
 */

int _sqrt(int n, int m)
{
	if (n < 0)
		return (-1);
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (_sqrt(n, m + 1));
}
