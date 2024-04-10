#include "search_algos.h"

/**
 *linear_search - Searches for a value in an array
 *		using linear search.
 * @array: pointer to first element
 * @value: the value being searched
 * @size: number of elements
 * Return: the value of the first pointer, if not
 * return NULL/ -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
