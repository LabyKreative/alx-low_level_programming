#include <main.h>

/**
 * Description: main - A program that prints _putchar, followed by a new line.
 * The program should return 0.
 * Return: executed.
 */

int main(void)
{
	char *sh = "putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
