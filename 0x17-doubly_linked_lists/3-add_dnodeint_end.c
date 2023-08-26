#include "lists.h"

/*
 * add_dnodeint_end - add a node to a double list at the end
 * @head: pointer to the first node in the list
 * @n: element to insert in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node;

	end_node = malloc(sizeof(dlistint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		end_node->prev = NULL;
		*head = end_node;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = end_node;
		end_node->prev = current;
	}
	return (end_node);
}
