#include "main.h"

/**
 * check_prime - checks if no is prime
 * @k: int
 * @m: int
 * Return: int
 */
int check_prime(int k, int m)
{
	if (m < 2 || m % k == 0)
	{
		return (0);
	}
	else if (k > m / 2)
	{
		return (1);
	}
	else
		return (check_prime(k + 1, m));
}

/**
 * is_prime_number - checks if number is prime
 * Description: checks if a number is prime or not
 * @n: number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
