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
	listint_t *current, *temp;

	if (head == NULL)
		return (0);
	temp = current = *head;
	if (*head)
	{
		s = current->n;
		*head = current->next;
		free(temp);
	}
	else
		s = 0;
	return (s);
}
