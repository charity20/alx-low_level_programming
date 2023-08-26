#include "lists.h"

/*
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h - pointer to the head of the list
 * @idx - position to insert
 * @n: elemnt of thye new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int i;
	dlistint_t *current = *h;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	for (unsigned int i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;
	if (current->next != NULL)
	{
		current->next = new_node;
	}
	current->next = new_node;
	return (new_node);
}
