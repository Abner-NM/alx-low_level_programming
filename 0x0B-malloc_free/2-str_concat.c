#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1; destination string
 * @s2: source string
 *
 * Return: new string on success or NULL if failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2, size;

	char *str;

	for (len1 = 0; s1 && s1[len1]; len1++)
		;
	for (len2 = 0; s2 && s2[len2]; len2++)
		;

	size = len1 + len2;

	str = malloc(sizeof(char) * (size +1));

	if (str == NULL)
		return (NULL);

	if (s1)
	{
		for (i = 0; i < len1; i++)
		{
			str[i] = s1[i];
		}
	}
	if (s2)
	{
		for (j = 0; j < size; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';

	return (str);
}
