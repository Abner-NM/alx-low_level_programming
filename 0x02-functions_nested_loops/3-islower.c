#include "main.h"

/**
 * _islower - a function that checks for
 * lowercase character and prints 1 if c is lowercase
 * and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
