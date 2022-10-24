#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_n - singly linked list
 * @str: string in linked list node
 * @len: length of string
 * @next: pointer to next node
*/
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* taks functions */
size_t print_list(const list_t *h);

#endif
