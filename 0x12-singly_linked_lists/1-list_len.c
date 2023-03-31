#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns number of elements
 * @h: header
 * Return: No of elements
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

