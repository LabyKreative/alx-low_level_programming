#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f1_hf1, f1_hf2, f2_hf1, f2_hf2;
	unsigned long hf1, hf2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;
	}

	f1_hf1 = f1 / 10000000000;
	f2_hf1 = f2 / 10000000000;
	f1_hf2 = f1 % 10000000000;
	f2_hf2 = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		hf1 = f1_hf1 + f2_hf1;
		hf2 = f1_hf2 + f2_hf2;
		if (f1_hf2 + f2_hf2 > 9999999999)
		{
			hf1 += 1;
			hf2 %= 10000000000;
		}

		printf("%lu%lu", hf1, hf2);
		if (count != 98)
			printf(", ");

		f1_hf1 = f2_hf1;
		f1_hf2 = f2_hf2;
		f2_hf1 = hf1;
		f2_hf2 = hf2;
	}
	printf("\n");
	return (0);
}
