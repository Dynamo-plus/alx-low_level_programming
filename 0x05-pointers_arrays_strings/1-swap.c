#include "main.h"

/**
 * swap_int - swap the value of the integers
 * @a: parameter
 * @b: parameter
 * Return: return void
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

