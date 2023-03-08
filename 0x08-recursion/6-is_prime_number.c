#include "main.h"
/**
 * is_prime_number - check if it is a prime number
 *
 * @n: inputed value
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (real_prime(n, (n - 1)));
}

/**
 * real_prime - check if it is a prime number
 *
 * @n: inputed value
 * @i: parameter
 * Return: Always 0.
 */

int real_prime(int n, int i)
{
	if (i == 1)
	{

		return (1);
	}
	if ((n % i) == 0 && i > 0)
	{
		return (0);
	}

	return (real_prime(n, (i - 1)));
}
