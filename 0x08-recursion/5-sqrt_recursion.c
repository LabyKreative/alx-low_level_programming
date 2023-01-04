#include "main.h"

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number.
 * @n: enter no.
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	{
		return (getNumSqr(n, 1));
	}
}

/**
 * getNumSqr - a function that get the number of sqrt.
 * @nu: enter no.
 * @x: no. variable.
 * Return: Always 0.
 */

int getNumSqr(int nu, int x)
{
	if (nu == (x * x))
	{
		return (x);
	}
	else if (nu > (x * x))
	{
		return (getNumSqr(nu, x + 1));
	}
	else
	{
		return (-1);
	}
}
