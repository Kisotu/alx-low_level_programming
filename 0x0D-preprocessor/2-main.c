#include <stdio.h>

/**
 * main - function that prints the name of file it was compiled from
 * Return: 0 if success
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
