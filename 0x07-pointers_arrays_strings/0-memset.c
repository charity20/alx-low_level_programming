#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer of the memory to be filled
 * @b: the char value
 * @n: unassigned integer of the number of bytes to be changed
 *
 * Return: desc
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s+i)=b;
	}
	return (s);
}
