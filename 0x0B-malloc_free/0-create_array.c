#include <stdlib.h>
#include "main.h"

/**
 * *create_array - a function that creates an array of
 * chars, and initializes it with a specific char
 * @size: size of array of charcters to be printed
 * @c: characters to be printed
 *
 * Return: Null if zise is 0 or pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(char) * size);

	if (p == NULL)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}

	*(p + i) = '\0';

	return (p);
}
