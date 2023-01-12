#include "main.h"

/**
 * _print - a function that moves a string one place to the left
 * and prints the string
 * @str: string to move
 * @l: size of string
 * Return: Always 0.
 */
void _print(char *str, int l)
{
	int x, y;

	x = y = 0;
	while (x < l)
	{
		if (str[x] != '0')
			y = 1;
		if (y || x == l - 1)
			_putchar(str[x]);
		x++;
	}

	_putchar('\n');
	free(str);
}

/**
 * mul - a function that multiplies a char with a string
 * and places the answer into dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of multiplication
 * @dest_index: highest index to start addition
 * Return: Always 0.
 */
char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{
	int y, z, mul, mulrem, add, addrem;

	mulrem = addrem = 0;
	for (y = num_index, z = dest_index; y >= 0; y--, z--)
	{
		mul = (n - '0') * (num[y] - '0') + mulrem;
		mulrem = mul / 10;
		add = (dest[z] - '0') + (mul % 10) + addrem;
		addrem = add / 10;
		dest[z] = add % 10 + '0';
	}
	for (addrem += mulrem; z >= 0 && addrem; z--)
	{
		add = (dest[z] - '0') + addrem;
		addrem = add / 10;
		dest[z] = add % 10 + '0';
	}
	if (addrem)
	{
		return (NULL);
	}
	return (dest);
}

/**
 * check_for_digits - a function that checks the arguments
 * to ensure they are digits
 * @av: pointer to arguments
 * Return: Always 0.
 */
int check_for_digits(char **av)
{
	int x, y;

	for (x = 1; x < 3; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			if (av[x][y] < '0' || av[x][y] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - a function that initializes a string
 * @str: string to initialize
 * @l: length of string
 * Return: Always 0.
 */
void init(char *str, int l)
{
	int x;

	for (x = 0; x < l; x++)
		str[x] = '0';
	str[x] = '\0';
}

/**
 * main - a function that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */

int main(int argc __attribute__((unused)), char **argv)
{
	int ln1, ln2, ln, ui, x;
	char *a;
	char *u;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))
	{
		for (ui = 0; e[ui]; ui++)
			_putchar(e[ui]);
		exit(98);
	}
	for (ln1 = 0; argv[1][ln1]; ln1++)
		;
	for (ln2 = 0; argv[2][ln2]; ln2++)
		;
	ln = ln1 + ln2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ui = 0; e[ui]; ui++)
			_putchar(e[ui]);
		exit(98);
	}
	init(a, ln - 1);
	for (ui = ln2 - 1, x = 0; ui >= 0; ui--, x++)
	{
		u = mul(argv[2][ui], argv[1], ln1 - 1, a, (ln - 2) - x);
		if (u == NULL)
		{
			for (ui = 0; e[ui]; ui++)
				_putchar(e[ui]);
			free(a);
			exit(98);
		}
	}
	_print(a, ln - 1);
	return (0);
}
