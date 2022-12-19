#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - a program that generates valid passwords.
 *
 * Return: Always 0.
 */

int main(void)
{
	int x = 0, y = 0;

	time_t t;
	srand((unsigned int) time(&t));
	while (y < 2772)
	{
		x = rand() % 128;
		if ((y + x) > 2772)
			break;
		y = y + x;
		printf("%c", x);
	}
	printf("%c\n", (2772 - y));
	return (0);
}
