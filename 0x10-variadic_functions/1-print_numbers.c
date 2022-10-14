#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", sepaator, va_arg(args, int));
	}

	va_end(args);

	printf("\n");

}
