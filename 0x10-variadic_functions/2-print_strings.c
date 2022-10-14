#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	va_end(args);

	printf("\n");

}
