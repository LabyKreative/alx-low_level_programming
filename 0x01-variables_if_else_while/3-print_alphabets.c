#include <stdio.h>

/**
 * Description: main - A program that prints lc and up
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int slts = 'a';
int caps = 'A';
while (slts <= 'z')
{
putchar(slts);
slts += 1;
}
while (caps <= 'Z')
{
putchar(caps);
caps += 1;
}
putchar('\n');
return (0);
}
