#include <stdio.h>
/**
 * main - A program that prints size of data types on the pc its on
 * Return: 0 if success, err otherwise
 */
int main(void)
{
	printf("Size of a char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %li byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("size of a float: %lld byte(s)\n", sizeof(float));
	return (0);
}
