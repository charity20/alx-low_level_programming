#include "main.h"
#include <stdio.h>

/**
 * create_file - function that creates a file
 * @filename: new file to be created
 * @text_content: contents of the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(x, text_content, len);

	if (x == -1 || w == -1)
		return (-1);
	close(x);
	return (1);
}
