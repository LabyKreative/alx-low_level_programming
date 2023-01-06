#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: pointer to destination char
 * @src: pointer to source char
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	unsigned int x = 0;
	unsigned int y = 0;

	while (*(dest + x) != '\0')
		x++;
	while (*(src + y) != '\0')
	{
		*(dest + x) = *(src + y);
		x++;
		y++;
	}
	return (dest);
}
