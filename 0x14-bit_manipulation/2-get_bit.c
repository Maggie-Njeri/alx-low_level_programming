#include "main.h"
#include <stdio.h>

/**
 * get_bit - used to return the value of a bit at a given index
 * @n: is the number used to check bits
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int con, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	con = 1 << index;
	check = n & con;

	if (check == con)
		return (1);

	return (0);
}
