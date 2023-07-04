#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index -  function that returns the nth node
 * @head: pointer to the first node
 * @index: 9th node to fetch from the list
 *
 * Return: index node or NULL if nonexistent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *n;

	if (!head)
		return (NULL);
	n = head;
	while (i < index)
	{
		if (!n)
			return (NULL);
		n = n->next;
		i++;
	}
	return (n);
}
