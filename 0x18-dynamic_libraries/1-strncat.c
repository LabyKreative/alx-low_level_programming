#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes to receive
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	unsigned int x = 0;
	int y = 0;

	while (*(dest + x) != '\0')
		x++;
	while (*(src + y) != '\0')
	{
		if (y < n)
		{
			*(dest + x) = *(src + y);
			x++;
		}
		y++;
	}
	return (dest);
}
