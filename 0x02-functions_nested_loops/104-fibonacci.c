#include <stdio.h>
/**
 * main - prints 98 fibonacci numbers starting with 1 or 2
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long add, f1 = 0, f2 = 1;

	for (i = 0; i < 98; i++)
	{
		add = f1 + f2;
		printf("%lu", add);
		f1 = f2;
		f2 = add;
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
