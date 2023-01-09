#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - a function that counts the number of words.
 * @str: String to check
 * Return: EXIT_SUCCESS.
 */
int word_count(char *str)
{
	int ct;
	int x;

	x = ct = 0;
	while (str[x] != '\0')
	{
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
		{
			ct++;
			x++;
		}
		x++;
	}
	return (ct);
}
/**
 * find_words_len - a function that finds the length words.
 * @str: check length of string in
 * @words: words.
 * Return: EXIT_SUCCESS.
 */
int *find_words_len(char *str, int words)
{
	int x, word, ln;
	int *sizes;

	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	x = word = 0;
	while (word < words)
	{
		if (str[x] != ' ')
		{
			ln = 0;
			while (str[x] != ' ')
			{
				ln++;
				x++;
			}
			ln++;
			sizes[word] = ln;
			word++;
		}
		x++;
	}
	return (sizes);
}
/**
 * strtow - a function that splits a string into words.
 * @str: string to splits.
 * Return: EXIT_SUCCESS.
 */
char **strtow(char *str)
{
	char **nstr;
	int words, x, y, z, new_words, *sizes;

	if (str == NULL || *str == '\0')
		return (NULL);
	words = word_count(str);
	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	sizes = find_words_len(str, words);
	nstr = malloc((words + 1) * sizeof(char *));
	if (nstr == NULL)
		return (NULL);
	x = y = z = 0;
	while (x < words && str[y] != '\0')
	{
		new_words = x;
		nstr[x] = malloc(sizes[x] + sizeof(char));
		if (nstr[x] == NULL)
		{
			for (x = x - 1; x >= 0; x--)
				free(nstr[x--]);
			free(nstr);
			return (NULL);
		}
		while (str[y] != '\0' && x == new_words)
		{
			if (str[y] != ' ')
			{
				while (str[y] != '\0' && str[y] != ' ')
				{
					nstr[x][z] = str[y];
					y++;
					z++;
				}
				nstr[x][z] = '\0';
				x++;
				z = 0;
			}
			y++;
		}
	}
	nstr[x] = NULL;
	free(sizes);
	return (nstr);
}
