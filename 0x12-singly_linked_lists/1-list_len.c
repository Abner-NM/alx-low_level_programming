#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: linked list pointer
 *
 * Return: number of elements in a list
*/
size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h->next != NULL)
	{
		h = h->next;
		s++;
	}

	s++;
	return (s);
}
