#include "main.h"

/**
 * *_strncpy - a function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of charcaters to copy
 *
 * Return: string copied in dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
