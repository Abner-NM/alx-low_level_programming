#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of
 * the string given as a parameter
 * @str: string to duplicate
 *
 * Return: NULL if failure, or duplicated string if otherwise
 */

char *_strdup(char *str)
{
	int i, len;

	char *dup;

	for (len = 0; str[len]; len++)
		;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; (dup[i] = str[i]) != '\0'; i++)
		;

	return (dup);
}
