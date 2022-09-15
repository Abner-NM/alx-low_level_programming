#include <stdio.h>
#include "main.h"

/**
 * main -prints the numbers from 1 to 100, followed by a new line
 * if multiple of 3: prints Fizz
 * if multle of 5: prints Buzz
 * if multiple of 3 & 5: prints FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
