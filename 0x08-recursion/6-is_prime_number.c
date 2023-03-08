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
	int i;

	for (i = 2; i < n; i++)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
	}

	return (1);
}
