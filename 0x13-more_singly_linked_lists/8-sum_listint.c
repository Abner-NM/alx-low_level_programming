#include "lists.h"

/**
 * sum_listint - returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to a node
 *
 * Return: sum of data of list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum = sum + (head->n);
		head = head->next;
	}
	return (sum);
}
