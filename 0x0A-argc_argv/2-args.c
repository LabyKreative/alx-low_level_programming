#include <stdio.h>
#include "main.h"

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument count.
 * @argv: argument vector arrays.
 * Return: EXIT_SUCCESS.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
