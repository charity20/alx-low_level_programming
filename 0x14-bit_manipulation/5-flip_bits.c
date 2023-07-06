#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: long integer
 * @m: unsigned integer
 *
 * Return: number of bits you would need to flip to get from one number to another
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
