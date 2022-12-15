#include <stdio.h>

/**
 * main - prints 98 fibonacci terms
 * Return: 0
 */
int main(void)
{
	int n = 98;
	int n1 = 1, n2 = 2;
	int n3 = n1 + n2;

	printf("%d, %d, ", n1, n2);
	for (i = 3; i <= n; ++i)
	{
		printf("%d, ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
	}
	printf("\n");
	return (0);
}
