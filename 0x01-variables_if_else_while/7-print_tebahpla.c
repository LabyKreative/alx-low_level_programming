#include <stdio.h>

/**
 * Description: main - A program that prints the lowercase alphabet in reverse.
 * You can only use the putchar function.
 * Return: 0
 */

int main(void)
{
int num = 122;
while (num > 96)
{
putchar(num);
num -= 1;
}
putchar('\n');
return (0);
}
