#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that returns the number of elements in a list
 * @h: pointer to the first node of the list
 *
 * Return: Length of the list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	if (!h)
		return (0);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
