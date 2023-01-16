#include <stdio.h>

/**
 * main - a program that prints the name of the file it was
 * compiled from, followed by a new line.
 *
 * Return: EXIT_SUCCESS.
 */

int main(__attribute__((unused)))
{
	printf("%s\n", __FILE__);
		return (0);
}
