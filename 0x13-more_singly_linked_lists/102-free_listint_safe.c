#include "lists.h"
/**
  * free_listint_safe - function that frees a list
  * @h: pointer to the first node
  * Return: the size of the list that was free’d
  */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int dif;
	size_t len = 0;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			temp = (*h)->next;
			*h = temp;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
