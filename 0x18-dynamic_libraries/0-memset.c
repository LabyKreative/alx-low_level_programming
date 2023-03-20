#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string
 * @b: constant byte
 * @n: n bytes to fill
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*(s + x) = b;
		x++;
	}
	return (s);
}
