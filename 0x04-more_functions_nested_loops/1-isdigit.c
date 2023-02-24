#include "main.h"

/**
 * _isdigit - function to check if input is in uppercase.
 * @c: parameter
 * Return: 1 if it is in upppercase,  0 if  otherwise.
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
