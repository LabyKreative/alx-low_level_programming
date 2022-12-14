#include "main.h"
/**
 *print_times_table - prints the n times table
 *@n: value to be computed.
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			printf("0");
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				if (product > 99)
				{
					printf(", %d", product);
				}
				else if (product > 9 && product <= 99)
				{
					printf(",  %d", product);
				}
				else
				{
					printf(",   %d", product);
				}

				if (j == n)
					continue;
			}
			printf("\n");
		}
	}
}
