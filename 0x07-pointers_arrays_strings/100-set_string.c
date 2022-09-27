#include "main.h"

/**
 * set_string - a function that sets the
 * value of a pointer to a char
 * @s: pointer of the pointer we are to set
 * @to: string to set to pointer
 */

void set_string(char **s, char *to)
{
	*s = to;
}
