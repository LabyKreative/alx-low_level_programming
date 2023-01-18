#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to print.
 * @f: pointer to funct
 * Return: EXIT_SUCCESS.
 */

void print_name(char *name, void (*f)(char *))
{
	if (!f)
	{
		return;
	}
	f(name);
}
