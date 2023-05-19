#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - prints length of list
 * @h: head
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
