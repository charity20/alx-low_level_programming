#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees memory in a list
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	if (!head)
		return;
	free_listint(head->next);
	free(head);
}
