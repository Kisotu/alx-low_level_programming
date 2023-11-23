#include "main.h"

/**
 * get_bit - a fxn that returns the value of a bit of given index
 * @n: bit to check
 * @index: index of bit to get
 * Return: value of bit at nth index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
