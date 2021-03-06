#include "holberton.h"

/**
 * create_file - creates a file and add content to it
 * @filename: name of the file to be created
 * @text_content: content to add to text file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int w_out, count;
	int fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	char *buff = malloc(sizeof(text_content));

	if (filename == NULL)
		return (-1);

	if (buff == NULL)
	{
		free(buff);
		return (-1);
	}
	if (fd == -1)
	{
		free(buff);
		return (-1);
	}
	if (text_content)
	{
		count = 0;
		while (*(text_content + count) != '\0')
			count++;

		w_out = write(fd, text_content, count);
		if (w_out == -1)
		{
			free(buff);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
