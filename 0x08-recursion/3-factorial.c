#include "main.h"

/**
 * factorial - the factorial of a number
 * @n: the number
 * Return: The number of the factoria
 */
int factorial(int n)
{
	if (n <= 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
