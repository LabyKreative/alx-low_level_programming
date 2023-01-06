#include "main.h"

/**
 * _strcpy - a function that copies the string by src
 *
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		*(dest + x) = *(src + x);
	}
	*(dest + x) = '\0';
	return (dest);
}
