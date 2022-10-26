#include "lists.h"

/**
 * listint_len - returns the number of
 * elements in a linked listint_t list
 * @h: pointer to first node
 *
 * Return: number of nodes in listint_t list
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
