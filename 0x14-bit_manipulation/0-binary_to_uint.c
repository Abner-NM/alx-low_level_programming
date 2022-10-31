#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a binary number to be converted
 *
 * Return: converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, pwr = 1;
	int len = 0;

	if (!b)
		return (0);

	while (b[len])
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		num += (b[len] - '0') * pwr;
		pwr *= 2;
	}
	return (num);
}
