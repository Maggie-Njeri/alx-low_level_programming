#include "lists.h"

/**
 * find_listint_loop - used to find the loop in a linked list.
 * @head:  is the address to be searched
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *w = head;
	listint_t *t = head;

	if (!head)
		return (NULL);

	while (w && t && t->next)
	{
		t = t->next->next;
		w = w->next;
		if (t == w)
		{
			w = head;
			while (w != t)
			{
				w = w->next;
				t = t->next;
			}
			return (t);

		}
	}

	return (NULL);
}
