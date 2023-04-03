#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: head of list
 * Return: NUmber of elements
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
