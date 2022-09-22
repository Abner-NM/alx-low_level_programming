#include "main.h"

/**
 * *leet - a function that encodes
 * a string into 1337
 * @s: string to encode
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;

	char *m = "aAeEoOtTlL";
	char *n = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
			}
		}
	}

	return (s);
}
