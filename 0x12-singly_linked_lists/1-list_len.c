#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - is used to return the number of nodes n a list.
 * @h- is the pointer to the list_t list.
 * Return: returns the number of elements in a pointer.
 */

size_t list_len(const list_t, int *h)
{
	size_t n = 0;

	while (h)
	{
	m++;
	h = h->next;
	}
	return (m);
}
