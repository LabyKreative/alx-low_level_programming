#include <stdio.h>
#include <ctype.h>

/**
 * Description: main - A program that prints the alphabet in lowercase.
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n = 'a';
while (n <= 'z')
{
putchar(n);
n += 1;
}
putchar('\n');
return (0);
}
