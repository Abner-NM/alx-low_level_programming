#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first interger
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
