#include "main.h"

/**
 * _memcpy - a function that copies copies memory area.
 * @dest: dest sring
 * @src: src string
 * @n: n bytes to fill
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	return (dest);
}
