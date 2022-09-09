#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 * and then prints the alphabet in UPPERCASE
 * Return: Always 0 if success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
