#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - function that adds a node at the beginning
 * @head: the first node of a list
 * @n: value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
