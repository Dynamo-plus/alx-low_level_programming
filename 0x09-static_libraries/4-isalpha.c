#include "main.h"

/**
 * _isalpha - to check if parameter is an alphabet
 * @c: value to be checked if it is an alphabet
 * Return: return 1 if it is in lowercase and 0 if in uppercase
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
