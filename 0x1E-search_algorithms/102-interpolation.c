#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *		using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements
  * @value: the value being searched
  * Return: first index where the value is located or NULL / -1
  *		if the value is not present
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
