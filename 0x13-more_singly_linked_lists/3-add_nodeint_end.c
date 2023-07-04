#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: first node of the list
 * @n: value for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *cursor = *head;

	end_node = malloc(sizeof(listint_t));
	if (end_node != NULL)
	{
		end_node->n = n;
		end_node->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = end_node;
	}
	else
		*head = end_node;
	return (end_node);
}
