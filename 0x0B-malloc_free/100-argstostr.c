#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * of your program.
 * @ac: argument count.
 * @av: argument vector array.
 * Return: EXIT_SUCCESS.
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int x, y, z, ln;

	if (ac == 0 || av == NULL)
		return (NULL);
	x = ln = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			ln++;
			y++;
		}
		ln++;
		x++;
	}
	ln++;
	str = malloc(ln * sizeof(char));
	if (str == NULL)
		return (NULL);
	x = z = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != 0)
		{
			str[z] = av[x][y];
			z++;
			y++;
		}
		str[z] = '\n';
		z++;
		x++;
	}
	return (str);
}
