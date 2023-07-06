#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value of bit
 * @index: index to check from
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	m <<= index;
	if (m & n)
		return (1);
	else
		return (0);
}
