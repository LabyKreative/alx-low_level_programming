#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument counts.
 * @argv: argument vector.
 * Return: EXIT_SUCCESS.
 */
int main(int argc, char **argv)
{
	int from, to, on_close, wt, rd;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		rd = read(from, buffer, 1024);
		if (rd == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (rd > 0)
		{
			wt = write(to, buffer, rd);
			if (wt == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	on_close = close(from);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from), exit(100);
	on_close = close(to);
	if (on_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to), exit(100);
	return (0);
}
