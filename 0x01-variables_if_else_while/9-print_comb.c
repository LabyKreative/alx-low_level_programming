#include <stdio.h>

/**
 * Description: main - A program that prints all possible combinations digits
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int num1 = 17;
int num2 = 25;
while (num1 <= 33)
{
putchar(num1);
if (num1 != 33)
{
putchar(num2);
putchar(11);
}
num1 += 1;
}
putchar('\n');
return (0);
}
