#include <stdio.h>
#include "main.h"

/**
 * 1-swap.c - swap the value of two integers
 * @a: first parameter
 * @b: second parameter
 * Reurn: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;
}
