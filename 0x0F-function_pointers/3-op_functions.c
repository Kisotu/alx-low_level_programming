#include "3-calc.h"

/**
 * op_add - calculates the sum of 2 integers
 * @a: first integer
 * @b: second integer
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference btwn 2 ints
 * @a: first integer
 * @b: second integer
 * Return: diff btwn a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of 2 integers
 * @a: first int
 * @b: second int
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the result of dividing a by b
 * @a: numerator
 * @b: denominator
 * Return: result of dividing a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of dividing 2 nos
 * @a: numerator int
 * @b: denominator int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
