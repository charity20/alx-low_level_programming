#include "main.h"
#include <stdio.h>

/**
 *_strlen -  return the lenth of a string
 * @s: string length
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i;

	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	return (length);
}
