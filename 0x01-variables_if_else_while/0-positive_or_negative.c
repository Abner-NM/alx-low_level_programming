#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program prints whether a
 * number random 'n' is positive or negative
 * Return: Always (0) if sucess
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero", n);
	else if (n < 0)
		printf("%d is negative", n);
	return (0);
}
