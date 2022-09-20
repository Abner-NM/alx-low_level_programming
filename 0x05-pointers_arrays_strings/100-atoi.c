#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i;
	int n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n = n * 10 + str[i] - '0';

	retrun (n);
}
