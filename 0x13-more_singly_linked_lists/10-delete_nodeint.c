#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - delete node
* @head: pointer to head
* @index: index
* Return: 1 if success 0 if fail
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;
	i = 0;

	while (temp != NULL)
	{
		if (i == index)
		{
			if (prev == NULL)
				*head = temp->next;
			else
				prev->next = temp->next;
			free(temp);
			return (1);
		}
		prev = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
