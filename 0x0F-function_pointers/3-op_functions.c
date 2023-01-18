#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - a function that adds a & b.
 * @a: input a
 * @b: input b
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - a function that subtracts a & b.
 * @a: input a
 * @b: input b
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - a function that multiplies a & b.
 * @a: input a
 * @b: input b
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - a function that divides a & b.
 * @a: input a
 * @b: input b
 * Return: division
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - a function that returns the modulo of a & b
 * @a: input a
 * @b: input b
 * Return: modulo
 */
int op_mod(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
