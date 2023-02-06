#include "main.h"

/**
 * read_textfile - a function that reads a text and print it to the
 * POSIX standard output.
 * @filename: path to file.
 * @letters: chars to read.
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int tp;
	char *buff;
	ssize_t bytes, rt;

	if (!filename)
		return (0);
	tp = open(filename, O_RDONLY);
	if (tp == -1)
	{
		close(tp);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(tp);
		return (0);
	}

	bytes = read(tp, buff, letters);

	if (bytes == -1)
	{
		close(tp);
		free(buff);
		return (0);
	}

	rt = write(STDOUT_FILENO, buff, bytes);

	if (rt == -1)
	{
		close(tp);
		free(buff);
		return (0);
	}
	close(tp);
	return (bytes);
}
