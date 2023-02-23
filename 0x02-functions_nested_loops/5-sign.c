#include "main.h"

/**
 * print_sign - a function to print the sign of a number
 * @n: received the value to be evaluated
 * Return: return 1 if n > 0 -1 if n < 0 and 0 if n = 0
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
