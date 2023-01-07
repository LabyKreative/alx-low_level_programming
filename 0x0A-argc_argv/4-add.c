#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: argument count.
 * @argv: argument vector arrays.
 * Return: EXIT_SUCCESS.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int sum;
	int count;
	int x;

	count = 1;
	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (count < argc)
	{
		for (x = 0; argv[count][x] != '\0'; x++)
		{
			if (!(isdigit(argv[count][x])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
