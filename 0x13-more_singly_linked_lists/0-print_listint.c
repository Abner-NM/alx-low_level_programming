#include "lists.h"

/**
 * print_listint -  prints all the integers of a listint_t list
 * @h: pointer to node in listint_t
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}
	return (s);
}
