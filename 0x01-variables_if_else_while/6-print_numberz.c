#include <stdio.h>

/**
 * Description: main - A program that prints all single digits
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 48;
while (n <= 57)
{
putchar(n);
n += 1;
}
printf("\n");
return (0);
}
