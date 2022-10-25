#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to added node
 * @str: node elemtnt to be added
 *
 * Return: address of the new element, or NULL if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	unsigned int len = 0;

	while (str[len])
		len++;

	temp = malloc(sizeof(list_t));

	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
