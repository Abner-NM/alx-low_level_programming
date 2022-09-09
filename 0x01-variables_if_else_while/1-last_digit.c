#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program determines the last
 * digit of a number and whether the
 * last digit of the number is reater than 5
 * Return: Always zero (0) if success
 */
int main(void)
{
	int n;

	scrand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	else if (n % 10 == 0)
		printf("and is 0\n");
	else if (n % 10 < 6 && n % 10 != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
