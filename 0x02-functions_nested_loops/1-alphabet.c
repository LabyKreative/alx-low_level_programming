#include "main.h"

/**
 * Description: main - A function that prints the alphabet, in lowercase
 * You can only use _putchar twice in your code
 * Return: 0 if successful
 */

void print_alphabet(void)
{
int l;

for (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');

return (0);
}
