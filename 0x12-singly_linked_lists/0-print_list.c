#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* while list is not null*/
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nul)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
