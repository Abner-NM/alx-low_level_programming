#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: value of a bit
 * @index: index of the bit to get
 *
 * Return: 1 or 0 (value of a bit)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
