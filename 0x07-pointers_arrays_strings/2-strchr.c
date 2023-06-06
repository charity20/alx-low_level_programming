#include "main.h"

/**
 * _strchr - locates a charcter in a string
 *@s: pointer to the character
 *@c: the character in the string
 *
 *Return: Pointer to the first character in a string else null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
