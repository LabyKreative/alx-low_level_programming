#include "main.h"

/**
 * _strlen_recursion - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: gotten string.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	{
		return (1 + _strlen_recursion(s));
	}
}

/**
 * get_pal - a function that checks if is 0 or 1.
 * @s: enter string.
 * @len: length
 * Return: Always 0.
 */

int get_pal(char *s, int len)
{
	if (*s != *(s + len - 1))
	{
		return (0);
	}
	else if (*s == '\0')
	{
		return (1);
	}
	return (get_pal(s + 1, len - 2));
}

/**
 * is_palindrome - a function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: enter char.
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
	{
		return (1);
	}
	return (get_pal(s, len));
}
