#include "lists.h"

/**
 * free_dlistint - used to free a dlistint_t list.
 * @head: is the pointer to head of the list
 * Return: NULL
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
