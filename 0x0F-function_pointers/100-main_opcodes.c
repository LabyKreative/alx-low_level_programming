#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: arguments counts.
 * @argv: arguments vector.
 * Return: EXIT_SUCCESS.
 */

int main(int argc, char *argv[])
{
	unsigned char *p = (unsigned char *)main;

	unsigned int bytes;

	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	bytes = atoi(argv[1]);

	for (i = 0; i < bytes; i++)
		printf("%02x ", *p++);
	printf("\n");
	return (0);
}
