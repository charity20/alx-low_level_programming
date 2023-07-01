#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free memory from a linked list
 * @head: pointer to the list
 * Return: return 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
