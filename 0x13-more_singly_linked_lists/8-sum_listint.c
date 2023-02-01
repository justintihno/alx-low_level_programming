#include "lists.h"

/**
 * sum_listint - calculates sum of all data (n) of a listint_t list
 * @head: A pointer to the head of the listint_t list.
 * Return 0 if empty
 * else sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
