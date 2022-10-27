#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @index: the index of the node, starting at 0
 * @head: pointer to a node
 *
 * Return: nth node of a listint_t linked list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (index == count)
			return (head);
		count++;
		head = head->next;
	}
	return (head);
}
