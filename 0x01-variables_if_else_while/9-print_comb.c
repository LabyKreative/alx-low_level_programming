#include <stdio.h>

/**
 * Description: main - A program that prints all possible combinations digits
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int num1 = 48;
int num2 = 44;
while (num1 <= 57)
{
putchar(num1);
if (num1 != 57)
{
putchar(num2);
putchar(32);
}
num1 += 1;
}
putchar('\n');
return (0);
}
