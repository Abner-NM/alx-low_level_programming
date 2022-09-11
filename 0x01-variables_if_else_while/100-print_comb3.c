#include <stdio.h>

/**
 * main - prints all possible different
 * combinations of two digits
 * Return: Always 0, if success
 */
int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i != 57 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
