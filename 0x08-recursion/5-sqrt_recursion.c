#include "main.h"

/**
 * _evaluate - evaluation function
 * @n: the number in question
 * @i: integer 2
 * Return: Always neutral squareroot
 */
int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i * i < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
	return (-1);
}
/**
 *_sqrt_recursion - squareroot function
 *@n: number to check
 *Return: Squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);
	return (_evaluate(i, n));
}
