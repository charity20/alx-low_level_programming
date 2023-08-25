#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check for a digit
 * @c: variable
 * Return: 1 if c is a digit and 0 if c is not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
