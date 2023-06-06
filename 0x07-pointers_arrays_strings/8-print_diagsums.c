#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the integers
 * @size: size of the square
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1, s2;

	s1 = 0;
	s2 = 0;

	i = 0;
	while (i < size)
	{
		s1 = s1 + *(a + i * size + i);
		s2 = s2 + *(a + i * size + size - i - 1);

		i++;
	}
	printf("%i, %i\n", s1, s2);
}
