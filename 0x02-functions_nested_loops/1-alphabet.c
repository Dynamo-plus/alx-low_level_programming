#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - print alphabet in lower case
 * _putchar -  the function toprint the alphabets
 */


void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
