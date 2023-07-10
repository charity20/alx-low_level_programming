#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file to be read
 * @letters: character to read
 *
 * Return: the actual number of letters if success otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, err, r;
	char *b;

	f = err = r = 0;
	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f < 0)
		return (0);
	b = malloc(sizeof(char) * letters + 1);
	if (!b)
		return (0);
	r = read(f, b, letters);
	if (r < 0)
	{
		free(b);
		return (0);
	}
	b[letters] = '\0';
	err = write(STDOUT_FILENO, b, r);
	if (err <= 0)
	{
		free(b);
		return (0);
	}
	free(b);
	close(f);
	return (r);
}
