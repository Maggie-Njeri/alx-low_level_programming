#include "lists.h"

/**
 * sum_listint - calculates sum of all the data (n) of a listint_t linked list.
 * @head: is a pointer to the first element in a linked list.
 * Return:  sum of all the data (n)
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int x = 0;
	listint_t *s = head;

	while (s)
	{
	x += s->n;
	s = s->next;
	}

	return (x);
}
