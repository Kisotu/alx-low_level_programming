#include "main.h"

/**
 * get_endianness - fxn that checks endianness
 * Return: 1 if big, 0 is little
 */
int get_endianness(void)
{
	int k;
	char *s;

	k = 1;
	z = (char *)&k;

	return (*z);
}
