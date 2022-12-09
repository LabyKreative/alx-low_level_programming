#include <stdio.h>

/**
 * Decription: main - A program that prints all single digit numbers.
 * Return: 0
 */

int main(void)
{
int num;
while (num < 10)
{
putchar("%d", num);
num += 1;
}
putchar("\n");
return (0);
}
