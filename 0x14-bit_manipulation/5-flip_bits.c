#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function of number of bits of a number from another
 * @n: long integer
 * @m: unsigned integer
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int s = 0, index;

	index = n ^ m;

	while (index > 0)
	{
		if (index & 1)
		{
			s++;
		}
		index >>= 1;
	}
	return (s);
}
