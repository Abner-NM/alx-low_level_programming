#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet,
 * in lowercase, followed by a new line
 * Return: None
 */
void print_alphabet(void)
{
	char i;
	
	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
