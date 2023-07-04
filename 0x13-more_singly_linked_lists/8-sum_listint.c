#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * sum_listint -  function that returns the sum of all the data in a list
 * @head: pointer to the first node
 *
 * Return: sum of all data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
