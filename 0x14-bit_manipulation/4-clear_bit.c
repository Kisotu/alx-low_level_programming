#include "main.h"

/**
 * clear_bit - a fxn that sets the value of bit at index to 0
 * @n: address to val to change
 * @index: position of bit val to change
 * Return: 1 if success, 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}

	k = ~(1 << index);
	*n = *n & k;

	return (1);
}
