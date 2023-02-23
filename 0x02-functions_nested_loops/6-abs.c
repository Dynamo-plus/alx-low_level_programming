#include "main.h"

/**
 * _abs - function that prints the absolute value of a number
 * @n: parameter
 * Return: absolute value
*/

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
