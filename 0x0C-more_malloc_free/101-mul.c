#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 * @s: value to be checked
 * Return: 1 if digit, 0 if otherwise
 */

int _isdigit(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * error - handles errors in the main function
*/

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguements
 * @argv: string of arguements
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, len, i, tmp, num1, num2, *result, a = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !_isdigit(str1) || !_isdigit(str2))
		error();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		tmp = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			tmp += result[len1 + len2 + 1] + (num1 * num2);
			result[len1 + len2 + 1] = tmp % 10;
			tmp /= 10;
		}
		if (tmp > 0)
			result[len1 + len2 + 1] += tmp;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
