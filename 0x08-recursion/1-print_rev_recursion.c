#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints string in reverse
 * @s: pointer to the string
 * Return: Always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
}

