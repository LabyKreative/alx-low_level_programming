#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 * of the no. 612852475143
 * Return: 0.
 */

int main(void)
{
	long n = 612852475143;
	long dvs = 2;
	long lp = 0;

	while (n != 1)
	{
		if (n % dvs == 0)
		{
			n = n / dvs;
			lp = dvs;
		}
		dvs += 1;
	}
	printf("%ld\n", lp);
	return (0);
}
