#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a pointer of the deleteed node
 * @index: aindex of the node that should be deleted
 *
 * Return: 1 on success, -1 if failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int node;

	listint_t *temp;

	if (!*head || !head)
		return (-1);
	while (*head)
	{
		if (index == node)
		{
			temp = (*head)->next;
			free(*head);
			(*head) = temp;
			return (1);
		}
		node++;
	}
	return (-1);
}
