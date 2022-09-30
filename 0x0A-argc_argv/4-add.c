#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguements
 * @argv: string of arguements
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, j, k, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
		for (j = 0; argv[i][j] != '\0'; j++)
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
	for (k = 1; k < argc; k++)
	{
		sum += atoi(argv[k]);
	}
	printf("%d\n", sum);
	return (0);
}
