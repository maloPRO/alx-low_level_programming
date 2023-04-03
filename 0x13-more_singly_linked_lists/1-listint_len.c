#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - lists elements
 * @h: head
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
