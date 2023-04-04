#include <stddef.h>
#include "lists.h"

/**
 * sum_listint - sums all data in list nodes
 * @head: pointer to head
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	int sum = 0;

	node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
