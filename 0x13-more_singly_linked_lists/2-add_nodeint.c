#include "lists.h"

/**
 * add_nodeint - adds a new node at the
 * beginning of a listint_t list
 * @head: pointer to a pointer of the added node
 * @n: addded node
 *
 * Return: address of the new element, or NULL if it fails
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
