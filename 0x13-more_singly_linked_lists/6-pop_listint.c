#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - pops head node
 * @head: pointer to head
 * Return: 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = temp->next;

	free(temp);

	return (data);
}
