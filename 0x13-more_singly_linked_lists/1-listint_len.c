#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the head of the listint_t list
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
