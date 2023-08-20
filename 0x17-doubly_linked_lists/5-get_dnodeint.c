#include "lists.h"

/*
 * get_dnodeint_at_index - return nth node
 * @head: pointer to the list
 * @index: nth node
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next
	}
	return (head);
}
