#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: string to evaluate
 * @c: character to locate
 *
 * Return: a pointer to the first occurrence of c
 */

char *_strchr(char *s, char c)
{
	int n;

	while (1)
	{
		n = *s++;

		if (n == c)
			return (s - 1);
		if (n == 0)
			return (NULL);
	}
}
