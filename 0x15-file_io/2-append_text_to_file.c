#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: path to file.
 * @text_content: content.
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int tp;
	ssize_t wt;
	int size;

	if (!filename)
		return (-1);

	tp = open(filename, O_WRONLY | O_APPEND);

	if (tp == -1)
		return (-1);

	if (!text_content)
	{
		close(tp);
		return (1);
	}

	size = _strlen(text_content);
	wt = write(tp, text_content, size);

	if (wt == -1)
	{
		close(tp);
		return (-1);
	}
	close(tp);
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
