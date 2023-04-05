#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
* print_listint_safe - prints list
* @head: pointer to node 1
* Return: number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head;
	size_t count = 0;

	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		count++;

		if (p <= p->next)
		{
			printf("-> [%p] %d\n", (void *)p->next, p->next->n);
			break;
		}

		p = p->next;
	}

	return (count);
}

