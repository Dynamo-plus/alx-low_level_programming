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

	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');

}
