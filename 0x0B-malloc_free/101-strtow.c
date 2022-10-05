#include "main.h"
#include <stdlib.h>

/**
 * word_count - couts the number of words in a string
 * @s: string to count words
 *
 * Return: number of words
 */

int word_count(char *s)
{
	int c, cnt = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			if (s[c + 1] != ' ' && s[c + 1] != '\0')
				cnt++;
		}
		else if (c == 0)
			cnt++;
	}
	cnt++;
	return (cnt);
}

/**
 * **strtow - a function that splits a string into words
 * @str: string to be split
 *
 * Return: pointer to array of words, or NULL(if failure)
 */

char **strtow(char *str)
{
	char **wd, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = word_count(str);
	if (words == 0)
		return (NULL);

	wd = (char **) malloc(sizeof(char *) * (words + 1));
	if (wd == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				wd[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	wd[k] = NULL;

	return (wd);
}
