#include "main.h"

/**
 * is_palindrome - evaluates if a string is a palindrome
 * @s: string to evalueate
 *
 * Return: 1 if s is palindrome, if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to evaluate
 *
 * Return: length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s++));
}

/**
 * _palindrome - checks if a string charcter is a palindrome
 * @s: string to evaluate
 * @i: iterator
 * @len: lenght of string
 *
 * Return: 1 if palindrome, 0 if otherwise
 */

int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
