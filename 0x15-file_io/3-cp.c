#include "holberton.h"

/**
 * main - copies file contents to another file
 * @ac: argument count
 * @av: argument values
 * Return: always 0
 */
int main(int ac, char **av)
{
	int f_close_1, f_close_2, fd_from, fd_to, count;
	char buff[1024];

	if (ac != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((count = read(fd_from, buff, 1024)) > 0)
	{
		if (fd_to == -1 || (write(fd_to, buff, count)) != count)
		{
			dprintf(STDERR_FILENO, "Error: Can't open fd %s\n", av[2]);
			exit(99);
		}
	}
	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f_close_1 = close(fd_from);
	if (f_close_1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	f_close_2 = close(fd_to);
	if (f_close_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
