#include "main.h"

/**
 * flip_bits - a fxn that returns no of flips
 * @m: resulting flip number
 * @n: starting fip number
 * Return: no of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	int counter;

	flip = n ^ m;
	counter = 0;
	while (flip)
	{
		if (flip & 1)
		{
			counter++;
		}
		flip >>= 1;
	}
	return (counter);
}
