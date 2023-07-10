#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int index;

	index = 2;

	if (index & 1)
	{
		return (0);
	}
	else
	return (1);
}