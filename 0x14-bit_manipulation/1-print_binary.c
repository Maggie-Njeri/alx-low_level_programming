#include "main.h"
#include <stdio.h>

/**
 * _pow - is used to calculate (base^power)
 * @base: is the base of the exponent
 * @power: is the power of the exponent
 * Return: the value of (base^power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int col;
	unsigned int r;

	col = 1;
	for (r = 1; r <= power; r++)
		col *= base;
	return (col);
}

/**
 * print_binary - is used to print a number in binary notation
 * @n: is the number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int num, check;
	char lax;

	lax = 0;
	num = _pow(2, sizeof(unsigned long int) * 8 - 1);

	while (num != 0)
	{
		check = n & num;
		if (check == num)
		{
			lax = 1;
			_putchar('1');
		}
		else if (lax == 1 || num == 1)
		{
			_putchar('0');
		}
		num >>= 1;
	}
}
