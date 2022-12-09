#include <stdio.h>

/**
 * Description: main - A program that prints all single digit
 * You are not allowed to use any variable of type char
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = "0"; num <= "9"; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
