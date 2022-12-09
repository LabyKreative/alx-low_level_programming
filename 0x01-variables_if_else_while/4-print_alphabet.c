#include <stdio.h>

/**
 * Description: main - A program that prints the alphabet in lowercase
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int slts = 'a';
while (slts <= 'z')
{
if (slts == 'e' || slts == 'q')
{
slts += 1;
}
else
{
putchar(slts);
slts += 1;
}
}
putchar('\n');
return (0);
}
