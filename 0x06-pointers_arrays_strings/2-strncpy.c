#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of bytes
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && *(src + x) != '\0')
	{
		*(dest + x) = *(src + x);
		x++;
	}
	while (x != n)
		dest[x++] = '\0';
	return (dest);
}
