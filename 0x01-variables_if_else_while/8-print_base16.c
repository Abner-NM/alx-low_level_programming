#include <stdio.h>

/**
 * main - prints all the numbers
 * of base 16 in lowercase
 * followed by a new line
 * Return: Always 0, if success
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
