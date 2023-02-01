#include "lists.h"

/**
 * get_nodeint_at_index - locates a node in a listint_t linked list
 * @head: pointer to the head of a linked listint_t list
 * @index: index of node to locate
 * Return: NULL if node doesnt exist
 * otherwise the located node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	while (node = 0; node < index; node++)
		do
		{
			if (head == NULL)
				return (NULL);

			head = head->next;
		}
	return (head);
}
