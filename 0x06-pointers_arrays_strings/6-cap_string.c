#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: Pointer to Char
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		if (x == 0 && (*(s + x) >= 97 && *(s + x) <= 122))
		{
			*(s + x) = *(s + x) - ' ';
			x++;
		}
		if (*(s + x) == ' ' || *(s + x) == '\n' || *(s + x) == '\t'
		    || *(s + x) == ',' || *(s + x) == ';' || *(s + x) == '!'
		    || *(s + x) == '?' || *(s + x) == '"' || *(s + x) == '('
		    || *(s + x) == ')' || *(s + x) == '{' || *(s + x) == '}'
		    || *(s + x) == '.')
		{
			x++;
			if (*(s + x) >= 97 && *(s + x) <= 122)
			{
				*(s + x) = *(s + x) - ' ';
			}
		}
		else
			x++;
	}
	return (s);
}
