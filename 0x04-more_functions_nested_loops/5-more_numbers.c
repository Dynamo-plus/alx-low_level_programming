#include "main.h"

/**
 * more_numbers - Nested loop function
 *
 * Return: void
*/

void more_numbers(void)
{
	char i, j;

	for (i = '0'; i <= 10; i++)
	{
		for (j = '0'; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
