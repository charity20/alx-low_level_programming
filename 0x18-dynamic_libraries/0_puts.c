#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a new line
 *
 *@s: string
 * Return: Always 0
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
