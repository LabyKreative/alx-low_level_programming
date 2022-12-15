#include <stdio.h>

/**
 * main - a program that prints the numbers from 1 to 100
 * But for multiples of three print Fizz
 * instead of the number and for five print Buzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz ");
		else if (n == 100)
			printf("Buzz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz ");
		else
			printf("%d ", n);
	}
	printf("\n");
	return (0);
}
