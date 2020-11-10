#include "holberton.h"

int main(int ac, char **av)
{
	int w_out, f_close_1, f_close_2;
	int fd_from, fd_to, count;
	int buff[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open fd %s\n", av[2]);
		exit(99);
	}
	w_out = write(fd_to, buff, count);
	f_close_1 = close(fd_from);
	if (f_close_1 == -1)
	{
		dprintf (STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	f_close_2 = close(fd_to);
	if (f_close_2 == -1)
	{
		dprintf (STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (w_out);
}
