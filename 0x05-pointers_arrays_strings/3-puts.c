#include <stdio.h>
#include "main.h"

/**
 * _puts - check the code
 *
 * @str: parameter
 *
 * Return: Always 1 if sucessful.
 */

void _puts(char *str)
{

	int i;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
