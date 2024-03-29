#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string
 * @accept: match a certain byte
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
