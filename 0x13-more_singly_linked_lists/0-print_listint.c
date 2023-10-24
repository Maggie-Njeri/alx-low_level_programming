#include "lists.h"
#include <stdlib.h>

/**
 * print_listint:- is used to prints all the elements of a list
 * @h: is a linked list of type listint
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h);
{
	size_t x = 0;

	while (h)
	{
	printf("%d\n", h->n);
	x++;
	h = h->next;
	}

	return (x);
}
