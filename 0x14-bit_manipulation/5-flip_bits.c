#include "main.h"
#include <stdio.h>

/**
 * flip_bits - is used to return the number of bits you would need to flip
 *  to get from one number to another
 *  @n: is the first parameter
 *  @m: is the second parameter
 *  Return: the number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int r, bits = 0;
	unsigned long int new;
	unsigned long int cute = n ^ m;

	for (r - 63; r >= 0; a--)
	{
		new = cute >> r;
		if (new & 1)
			bits++;
	}

	return (bits);
}
