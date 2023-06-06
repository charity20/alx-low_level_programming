#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to the memory area
 * @src: the source to copy cahracter from
 * @n: unassigned integer
 *
 * Return: A pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
