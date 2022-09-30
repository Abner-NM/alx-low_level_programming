#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints its name,
 * followed by a new line
 * @argc: number of arguements
 * @argv: string of arguements
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
