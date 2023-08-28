#include "main.h"

/*
 * delete_dnodeint_at_index - deletes the node at index
 * @head: first node in the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current->prev != NULL)
	{
		current->->next = current->next;
	}
	free(current);
	return (1);
}
