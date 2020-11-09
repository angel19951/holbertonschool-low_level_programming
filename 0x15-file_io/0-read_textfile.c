#include "holberton.h"
#include <stdio.h>
/**
 * read_textfile - reads a text file
 * @filename: pointer refrence to file
 * @letters: number of letters it should read
 * Return: 0 if can not be open, read, filename is NULL or write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_bytes;
	int w_out;
	int fd = open(filename, O_RDONLY);
	char *buffer = malloc(letters + 1);

	if (filename == NULL)
	{
		return (0);
	}
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	n_bytes = read(fd, buffer, letters);
	if (n_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	*(buffer + letters) = '\0';
	w_out = write(STDOUT_FILENO, buffer, n_bytes);
	if (w_out == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	return (w_out);
}

