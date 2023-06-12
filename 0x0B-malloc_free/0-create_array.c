#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of specific characters
 * @size: size of array
 * @c: character to initialize
 * Return: pointer to array or NULL if size 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
