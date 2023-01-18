#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - a function that prints the opcodes
 * of this program.
 * @a: main function address.
 * @n: print number of bytes.
 * Return: EXIT_SUCCESS.
 */

void print_opcodes(char *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%.2hhx", a[x]);
		if (x < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - a function that prints the opcodes
 * of its own main function.
 * @argc: arguments counts.
 * @argv: arguments vector.
 * Return: EXIT_SUCCESS.
 */

int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
