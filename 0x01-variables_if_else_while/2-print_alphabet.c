#include <stdio.h>
#include <ctype.h>

/**
 * Description: main - prints alphabets in lowercase.
 * Use only putchar function.
 * Return: 0
 */

int main(void)
{
int x = "a";
while (x <= "z")
{
putchar(x);
x += x;
}
putchar("\n");
return (0);
}
