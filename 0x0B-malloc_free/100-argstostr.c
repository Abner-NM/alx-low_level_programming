#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all the arguments of your program
 * @ac: argumuement count
 * @av: array of arguments
 *
 * Return: NULL if failure or stringer pointer on succes
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len++;
	}
	str = malloc(sizeof(char) * (len));

	if (str == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
