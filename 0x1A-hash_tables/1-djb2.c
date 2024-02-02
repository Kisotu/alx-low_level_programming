#include "hash_tables.h"

/**
 * hash_djb2 - function that implements the djb2 algorithm
 * @str: string to gen the hash value
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash_val;

	hash_val = 5381;

	while ((c = *str++))
	{
		hash_val = ((hash_val << 5) + hash_val) + c;
	}
	return (hash_val);
}
