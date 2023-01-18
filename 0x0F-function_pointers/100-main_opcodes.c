#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that prints the opcodes of its own main function.
 * @argc: arguments counts.
 * @argv: arguments vector.
 * Return: EXIT_SUCCESS.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	unsigned char *ptr = (unsigned char *)main;

	unsigned int bytes;

	int x;

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

	for (x = 0; x < bytes; x++)
	{
		printf("%02x ", *ptr++);
	}
	printf("\n");
	return (0);
}
