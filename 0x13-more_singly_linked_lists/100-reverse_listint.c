#include <stddef.h>
#include "lists.h"

/**
* reverse_listint - reverses list
* @head: pointer to head
* Return: reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head, *next;

	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;

	return (*head);
}

