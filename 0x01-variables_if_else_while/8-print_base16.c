#include <stdio.h>

/**
 * Description: main -  A program that prints all the numbers of base 16.
 * You can only use the putchar function.
 * Return: 0
 */

int main(void)
{
int num = 48;
int lt = 'a';
while (num <= 57)
{
putchar(num);
num += 1;
}
while (lt <= 'f')
{
putchar(lt);
lt++;
}
putchar('\n');
return (0);
}
