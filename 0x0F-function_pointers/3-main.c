#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: EXIT_SUCCESS.
 */
int main(int argc __attribute__((unused)), char **argv)
{
	int a1, b2, x;

	op_t oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = strlen(argv[2]);

	if (strcmp(argv[2], "+") != 0
		&& strcmp(argv[2], "-") != 0
		&& strcmp(argv[2], "*") != 0
		&& strcmp(argv[2], "/") != 0
		&& strcmp(argv[2], "%") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if (x > 1)
	{
		printf("Error\n");
		exit(99);
	}
	a1 = atoi(argv[1]);
	b2 = atoi(argv[3]);
	oper.op = argv[2];
	oper.f = get_op_func(argv[2]);
	printf("%d\n", oper.f(a1, b2));
	return (0);
}
