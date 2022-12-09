#include <stdio.h>

/**
 * Description: main - A program that prints all possible different comb
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */

int main(void)
{
int num1 = 48;
int num2;
int comb = 44;
while (num1 <= 57)
{
num2 = num1 + 1;
while (num2 <= 57)
{
putchar(num1);
putchar(num2);
if (num1 != 56 || n2 != 57)
{
putchar(comb);
putchar(32);
}
num2 += 1;
}
num1 += 1;
}
putchar('\n');
return (0);
}
