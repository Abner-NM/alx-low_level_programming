#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to a memory area
 * @b: constant byte
 * @n: number of bytes to be filled
 *
 * Return: memory area, s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of elemnts to allocate memory
 * @size: number of bytes to allocate per elemnt
 *
 * Return: return pointer to memory or NULL if failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
