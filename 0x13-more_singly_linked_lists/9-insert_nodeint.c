#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts node at index
* @head: pointer to head
* @idx: index
* @n: node data
* Return: adress of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (idx > 1 && temp)
	{
		temp = temp->next;
		idx--;
	}

	if (!temp)
	{
		free(new);
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;

	return (new);
}

