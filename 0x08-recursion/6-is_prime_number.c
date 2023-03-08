#include "main.h"

/**
 * is_prime_number - check if it is a prime number
 *
 * @n: inputed value
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
	{
		return ((n == 2) ? return (1) : return (0));
	}

	if ((n % i) == 0)
	{
		return (0);
	}
	if ((i * i) > n)
	{
		return (1);
	}

	return (is_prime_number(n, i + 1));
}
