#include "lists.h"

/**
 * list_len - finds number of elements
 * in a linked list
 * @h: linked list_t list
 * @elements: a counter variable for size_t
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}