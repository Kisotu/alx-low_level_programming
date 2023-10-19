#include "main.h"

/**
  * print_number - prints an integer
  * @n: the number to be printed
  *
  * Return: no return val
  */
void print_number(int n)
{
	unsigned int k;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	k = n;

	if (k / 10)
	{
		print_number(x / 10);
	}
	_putchar(k % 10 + '0');
}
