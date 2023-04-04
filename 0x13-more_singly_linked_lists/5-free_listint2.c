#include <stdlib.h>
#include <stddef.h>
#include "lists.h"


/**
* free_listint2 - frees a linked list
* @head: list_t list to be freed
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
