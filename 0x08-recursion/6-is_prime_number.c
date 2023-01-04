#include "main.h"

/**
 * is_prime_number - a function that returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * @n: enter a number.
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (getNumPrim(n, 2));
}

/**
 * getNumPrim - function that gets if num is 0 or 1
 * @num: enter a number
 * @i: Counter variable
 * Return: int
 */

int getNumPrim(int num, int i)
{
	if (num == i)
	{
		return (1);
	}
	if (num % i == 0)
	{
		return (0);
	}
	return (getNumPrim(num, i + 1));
}
