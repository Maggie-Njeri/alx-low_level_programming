#include "main.h"

/**
 * get_endianness - is used to check the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x;
	char *h;

	x = 1;
	h = (char *) &x;

	return (*h);
}
