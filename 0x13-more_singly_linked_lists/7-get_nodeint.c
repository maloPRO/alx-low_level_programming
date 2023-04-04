#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - get node at index
 * @head: pointer to head
 * @index: index of node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node;

	node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (count == index)
		{
			return (node);
		}
		count++;
		node = node->next;
	}
	return (NULL);
}
