#include <stdio.h>

/**
 * main - prints single digit numbers
 * of base 10 starting from 0
 * followed by a new line
 * printf is NOT allowed
 * Return: Always 0 if success
 */
int main(void)
{
	int n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
