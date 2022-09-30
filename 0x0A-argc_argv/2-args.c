#include <stdio.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: number of arguements
 * @argv: string of arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
