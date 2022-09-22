#include "main.h"

/**
 * *rot13 - a function that encodes a
 * string using rot13
 * @s: string to be encoded
 *
 * Return: Encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char *m = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *n = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == m[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}

	return (s);
}
