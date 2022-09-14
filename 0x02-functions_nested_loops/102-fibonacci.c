#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * Return: Always 0
 */

int main(void)
{
	long int i, j, k, l;

	i = 1;
	j = 2;
	k = 3;

	printf("%ld, ", i);
	printf("%ld, ", j);
	for (l = 3; l < 50; l++)
	{
		printf("%ld, ", k);
		i = j;
		j = k;
		k = i + j;
	}
	printf("%ld\n", k);
	return (0);
}
