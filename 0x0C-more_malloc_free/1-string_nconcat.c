#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: amount of bytes to allocate
 *
 * Return: pointer to allocated space or Null if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s1[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char *) * (len1 + n + 1));
	else
		str = malloc(sizeof(char *) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			str[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (n < len2 && i < (len1 + n + 1))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
		while (n >= len2 && i < (len1 + len2 + 1))
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	}
	str[i] = '\0';
	return (str);
}
