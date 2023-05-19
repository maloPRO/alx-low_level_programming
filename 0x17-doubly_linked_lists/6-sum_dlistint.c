#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <stddef.h>

/**
 * sum_dlistint - sums node values
 * @head: head
 * Return: sum of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *node;

	node = head;

	if (head == NULL)
	{
		return (0);
	}

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
