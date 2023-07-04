#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first node
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *temp;

	if (!head || !(*head))
	{
		return (NULL);
	}
	if (!(*head)->next)
	{
		return (*head);
	}
	temp = *head;
	prevnode = NULL;
	while (1)
	{
		if (!prevnode)
		{
			prevnode = *head;
			temp = temp->next;
			prevnode->next = NULL;
			*head = prevnode;
		}
		else
		{
			prevnode = temp;
			temp = temp->next;
			prevnode->next = *head;
			if (!temp)
			{
				temp = prevnode;
				break;
			}
			*head = prevnode;
		}
	}
	*head = temp;
	return (*head);
}
