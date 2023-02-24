#include "main.h"

/**
 * _isupper - function to check if input is in uppercase.
 * @c: parameter
 * Return: 1 if it is in upppercase,  0 if  otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
