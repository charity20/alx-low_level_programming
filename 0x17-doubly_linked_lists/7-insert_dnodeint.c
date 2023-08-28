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
	dlistint_t *current = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (new_node == NULL)
	{
		return (NULL);
	}
	for (; idx != 1; idx--)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));
	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
