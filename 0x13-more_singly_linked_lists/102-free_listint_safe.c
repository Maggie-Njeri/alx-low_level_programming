#include "lists.h"

/**
 * free_listint_safe - is a function that frees a listint_t list.
 * @h: is a pointer to the first element in a linked list
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int k;
	listint_t *s;

	if (!h || !*h)
		return (0);

	while (*h)
	{
	k = *h - (*h)->next;

	if (k > 0)
	{
		s =  (*h)->next;
		free(*h);
		*h = s;
		len++;
	}

	else
	{
		free(*h);
		*h = NULL;
		len++;
		break;
	}
	}

	*h = NULL;

	return (len);
}
