#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count.
 * @argv: arguments vector arrays.
 * Return: EXIT_SUCCESS.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
