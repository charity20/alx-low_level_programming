#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements in a list
 * @h: pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *count = h;
	size_t n_nodes = 0;

	if (count == NULL)
		return (0);
	while (count != NULL)
	{
		printf("%d\n", count->n);
		count = count->next;
		n_nodes += 1;
	}
	return (n_nodes);
}
