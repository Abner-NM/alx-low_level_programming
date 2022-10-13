#include "function_pointers.h"

/**
 * int_index - searches for an interger
 * @array: aray of integers
 * @size: size of an array
 * @cmp: pointer to function used to compare values
 *
 * Return: index of non zero integer, or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			return (i);
		}
	}
	return (-1);
}
