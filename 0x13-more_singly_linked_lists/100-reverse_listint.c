#include "lists.h"

/**
 * reverse_listint - is a function that reverses a listint_t linked list.
 * @head: is a pointer for the first element
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL;
	listint_t *n = NULL;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = p;
		p = *head;
		*head = n;
	}
	*head = p;

	return (*head);
}
