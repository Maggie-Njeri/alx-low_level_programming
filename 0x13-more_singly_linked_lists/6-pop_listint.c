#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the pointer to the first element of a linked list
 * Return: returns the head node’s data (n).
 *if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *s;
	int x;

	if (!head || !*head)
		return (0);
	x = (*head)->n;
	s = (*head)->next;
	free(*head);
	*head = s;
	return (x);
}
