#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: value of minimum number in the range
 * @max: value of maximum number on the range
 *
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = ((max - min) + 1);

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
