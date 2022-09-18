#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line
 * Return: Always 0, if success
 */

int main(void)
{
	long int n, d;

	n = 612852475143;
	d = 3;

	while (n % d == 0)
	{
		n = n / d;
	}
	printf("%ld\n", n);
	return (0);
}
