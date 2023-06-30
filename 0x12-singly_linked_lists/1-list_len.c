#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - retutrns length of a list
 * @h: pointer to the list
 *
 * Return: length of a list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
