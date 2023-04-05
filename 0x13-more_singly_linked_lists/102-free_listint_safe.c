#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free nodes
 * @h: pointer to head
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp, *current = *h;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		count++;

		if (tmp <= current)
		{
			break;
		}
	}

	*h = NULL;
	return (count);
}

