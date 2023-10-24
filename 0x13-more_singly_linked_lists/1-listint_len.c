#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: is a linked list of type listint
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0

	while (h)
	{
	x++;
	h =  h->next;
	}

	return (x);
}
