#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguements
 * @argv: string of arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n, m, prod;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	m = atoi(argv[2]);
	prod = n * m;

	printf("%d\n", prod);

	return (0);
}
