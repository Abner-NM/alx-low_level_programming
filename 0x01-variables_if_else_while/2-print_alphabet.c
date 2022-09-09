#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * Return: Always 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
