#include "main.h"

/**
 * binary_to_uint - is used to convert a binary number to an unsigned int
 * @b: is the address to a string containing a binary number
 * Return: unsigned int with the converted number or 0 on error
 */

unsigned int binary_to_uint(const char *b)
{
	int r;
	unsigned int bin;

	bin = 0;
	if (!b)
		return (0);
	for (r = 0; b[r] != '\0'; r++)
	{
		if (b[r] != '0' && b[r] != '1')
			return (0);
	}
	for (r = 0; b[r] != '\0'; r++)
	{
		bin <<= 1;
		if (b[r] == '1')
			bin += 1;
	}

	return (bin);
}
