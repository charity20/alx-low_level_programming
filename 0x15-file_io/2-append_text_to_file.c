#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the file to append to
 * @text_content: text to append to the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len;

	fd = err = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(fd, text_content, len);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}