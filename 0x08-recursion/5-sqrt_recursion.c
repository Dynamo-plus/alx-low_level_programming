#include "main.h"

int real_sqrt(int n, int i);

/**
 * _sqrt_recursion - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: resulty of real_sqrt function and -1 as invalide
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}

/**
 * real_sqrt - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: i as the sqrt, -1 as invalid
 */
int real_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i  == n)
		return (i);
	return (real_sqrt(n, i + 1));
}

