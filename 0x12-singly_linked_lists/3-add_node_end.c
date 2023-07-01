#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to singly linked list.
 * @str: pointer to signly linked list.
 *
 * str needs to be duplicated.
 * You are allowed to use strdup.
 *
 * Return: The address of the new element or NULL if it failed.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t nchar;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	new_node->len = nchar;
	new_node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
