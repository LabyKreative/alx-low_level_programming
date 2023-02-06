#include "main.h"

/**
 * create_file - create a function that creates a file.
 * @filename: path to file.
 * @text_content: content.
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int tp;
	ssize_t wt;
	int size;
	char *mem;

	if (!filename)
	{
		return (-1);
	}
	tp = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (tp == -1)
		return (-1);
	if (!text_content)
	{
		close(tp);
		return (1);
	}
	size = _strlen(text_content);
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(tp);
		return (-1);
	}
	wt = write(tp, text_content, size);
	if (wt == -1)
	{
		close(tp);
		free(mem);
		return (-1);
	}
	close(tp);
	free(mem);
	return (1);
}

/**
 * _strlen - a function that len chars.
 * @s: is a pointer to a char.
 * Return: EXIT_SUCCESS.
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}

	return (x);
}
