#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int y, s, i;
	char *buf;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		y = open(filename, O_CREAT, 0600);
		if (y == -1)
			return (-1);
		return (1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
		;
	buf = malloc(i * sizeof(char));
	if (buf == NULL)
		return (-1);
	y = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (y == -1)
		return (-1);
	s = write(y, text_content, i);
	if (s == -1)
		return (-1);
	close(y);
	free(buf);
	return (1);
}
