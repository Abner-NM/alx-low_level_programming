#include "main.h"

/**
 * *string_toupper - a function that changes all
 * lowercase letters of a string to uppercase
 * @s: string to be evaluated
 *
 * Return: UPPER CASE STRINg
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
