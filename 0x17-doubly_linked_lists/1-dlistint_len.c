#include "lists.h"

/*
 * dlistint_len - return the number of elements in a list
 * @h: pointer to the list
 *
 * Return: len of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t count = 0;

	while (node)
	{
		count++;
		node = node->next;
	}
	return (count)
}
