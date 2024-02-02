#include "hash_tables.h"

/**
 * key_index - fuct that eturns the index at which the
 * key/value pair should be stored
 * @key: the key
 * @size: size of array of hash table
 * Return: index of the key
 * Description: provides key to djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
