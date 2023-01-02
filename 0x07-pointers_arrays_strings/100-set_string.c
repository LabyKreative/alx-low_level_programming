#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: string
 * @to: char
 * Return: Always 0.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
