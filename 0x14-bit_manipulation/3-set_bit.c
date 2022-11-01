#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a bit
 * @index: index of bit in a number n
 *
 * Return: 1 if succes, otherwise -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
