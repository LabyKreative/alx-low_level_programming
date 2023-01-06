#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string
 * @pre: prefix string
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *pre)
{
	unsigned int len = 0;

	unsigned int x;

	while (*(s + len) != 0)
	{

		int flag = 0;

		for (x = 0; *(pre + x) != 0; x++)
		{
			if (*(s + len) == *(pre + x))
			{
				len++;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}
	return (len);
}
