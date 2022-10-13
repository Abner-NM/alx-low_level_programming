#include "3-calc.h"

/**
 * main - a program that performs simple operations
 * @argc: number of arguments
 * @argv: array of arguements
 *
 * Return: Awalsy 0 if Success, 1 otherwise
*/
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char operator;

	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[3]);

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		printf("Error\n");
		exit(99);
	}

	operator = *argv[2];

	if ((operator == '/' || operator == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fn(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
