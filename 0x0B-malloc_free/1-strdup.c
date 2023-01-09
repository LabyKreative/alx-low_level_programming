#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a
 * newly allocated space in memory.
 * @str: duplicate string.
 * Return: EXIT_SUUCESS.
 */

char *_strdup(char *str)
{
	char *nums;
	unsigned int x, len;

	if (str == NULL)
		return (NULL);
	x = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	nums = malloc(len * sizeof(*str));
	if (nums == NULL)
		return (NULL);
	while (x <= len)
	{
		nums[x] = str[x];
		x++;
	}
	return (nums);
}
