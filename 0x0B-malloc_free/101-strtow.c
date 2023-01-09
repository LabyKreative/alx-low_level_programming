#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits string into words
 * @str: string
 * Return: EXIT_SUCCESS.
 */
char **strtow(char *str)
{
	char **s;

	int words, x = 0, filler = 0;

	if (str == NULL || *str == 0)
		return (NULL);
	words = getWords(str);
	if (words == 0)
		return (NULL);
	s = malloc(sizeof(char *) * (words + 1));
	if (s == NULL)
		return (NULL);
	while (str[x])
	{
		if (str[x] != ' ')
		{
			int size = get_size_of_first(str + x);

			s[filler] = malloc(sizeof(char) * (size + 1));
			if (s[filler] == NULL)
			{
				int z;

				for (z = 0; z < filler; z++)
				{
					free(s[z]);
				}
				free(s);
				return (NULL);
			}
			fill(s[filler], str + x, size);
			filler++;
			x += size - 1;
		}
		x++;
	}
	s[words] = NULL;
	return (s);
}
/**
 * getWords - get number of words in string
 * @s: string
 * Return: EXIT_SUCCESS.
 */
int getWords(char *s)
{
	int x = 0, words = 0;

	while (s[x])
	{
		if (x == 0 && s[x] != ' ')
			words++;

		if (s[x] == ' ' && s[x + 1] && s[x + 1] != ' ')
		{
			words++;
		}
		x++;
	}
	return (words);
}
/**
 * get_size_of_first - size of first word in string
 * @s: string
 * Return: size of word
 */
int get_size_of_first(char *s)
{
	int x = 0;

	while (s[x] && s[x] != ' ')
		x++;
	return (x);
}
/**
 * fill - fills s2 in s1
 * @s1: string1
 * @s2: string2
 * @size: size of s2
 * Return: void
 */
void fill(char *s1, char *s2, int size)
{
	int x = 0;

	while (x < size)
	{
		s1[x] = s2[x];
		x++;
	}
	s1[size] = '\0';
}
