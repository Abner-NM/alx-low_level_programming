#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character to be checked
 *
 * Return: 1 if lower case, 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
