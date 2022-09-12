#include "main.h"

/**
 * a program that prints _putchar
 * followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char i, n;
	char m[] = "_putchar\n";

	for (i = 0; i <= 8; i++)
	{
		n = m[i];
		_putchar(n);
	}
	return (0);
}
