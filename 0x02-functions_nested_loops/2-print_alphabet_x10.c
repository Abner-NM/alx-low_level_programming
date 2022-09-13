#include "main.h"

/**
 * print_alphabet_x10 - a function that prints the alphabet
 * 10 times, in lowercase, followed by a new line
 * Return: None
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
