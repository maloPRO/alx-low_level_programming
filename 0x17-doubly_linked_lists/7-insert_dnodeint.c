#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: gead
 * @idx: index
 * @n: node date
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		for (i = 0; i < idx - 1 && current; i++)
			current = current->next;
		if (!current)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next)
			current->next->prev = new_node;
		current->next = new_node;
	}
	return (new_node);
}
