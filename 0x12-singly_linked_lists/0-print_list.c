#include <stdio.h>
#include "lists.h"

/**
 * print_list - is used to print all the elements
 * @h - is a pointer that shows list_t list to print
 * Return: will return the number of the nodes printed
 */

size_t print_list(const list_t *h)
{
	int *h = 0;
	size_t p = 0;

	while (h)
	{
	if (!h->str)
	printf("[0] (nil)\n");
	else
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	p++;
	}

	return (p);
}
