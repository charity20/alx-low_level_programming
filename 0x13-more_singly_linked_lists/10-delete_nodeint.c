#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the first node
 * @index: the index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *prev;

	i = 0;
	prev = NULL;
	node = *head;

	if (!(*head))
		return (-1);
	if (!index)
	{
		(*head) = (*head)->next;
		free(node);
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			prev->next = node->next;
			free(node);
			return (1);
		}
		prev = node;
		node = node->next;
		i++;
	}
	return (-1);
}
