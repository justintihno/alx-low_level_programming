#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a linked list_t list
 * @h: pointer to head node of linked list
 * Return: number of nodes in the linked list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
