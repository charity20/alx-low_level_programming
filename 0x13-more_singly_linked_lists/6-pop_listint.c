#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  function that deletes the head node of a list
 * @head: first node
 *
 * Return: the head node data or if empty return 0
 */
int pop_listint(listint_t **head)
{
	int s;
	listint_t *new_head;

	if (!(head) || !head)
		return (0);
	new_head = (*head)->next;
	s = (*head)->n;
	free(*head);
	*head = new_head;

	return (s);
}
