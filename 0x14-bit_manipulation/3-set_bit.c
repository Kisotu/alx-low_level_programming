#include "main.h"

/**
 * set_bit - a fxn that sets value of a bit at position to 1
 * @n: address of bit
 * @index: position of bit to set
 * Return: 1 if success, 0 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
