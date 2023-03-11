#include "main.h"

/**
 * _islower - to check if parameter is in lowercase
 * @c: value to be checked if it is upper or lowercase
 * Return: return 1 if it is in lowercase and 0 if in uppercase
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
