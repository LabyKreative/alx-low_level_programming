#include <stdio.h>

/**
 * Description: main - A program that prints all single digit
 * typ char is not allowed, only putchar
 * Return: 0
 */

int main(void)
{
int num = 48;
while (num <= 57)
{
putchar(num);
num += 1;
}
putchar("\n");
return (0);
}
