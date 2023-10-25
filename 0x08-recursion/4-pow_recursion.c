#include "main.h"

/**
 * _pow_recursion - raises number by a power
 * @x: base
 * @y: exponent
 * Return: x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
		return (-1);
}
