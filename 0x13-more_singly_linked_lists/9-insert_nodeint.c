#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer to the first node
 * @idx:  index of the list where the new node should be added
 * @n: value of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = NULL;
	listint_t *previous_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || idx > listint_len(*head))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (head != NULL)
	{
		if (i == idx)
		{
			if (i == 0)
			{
				new_node->next = *head;
				*head = new_node;
				return (new_node);
			}
			new_node->next = previous_node->next;
			previous_node->next = new_node;
			return (new_node);
		}
		else if ((i + 1) == idx)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (NULL);
}

/**
 * listint_len - creates a new listint_t node
 * @h: pointer to the head node
 *
 * Return: pointer to the new node
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
