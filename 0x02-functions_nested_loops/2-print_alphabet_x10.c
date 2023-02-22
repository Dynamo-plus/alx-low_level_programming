#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 * _putchar -  the function toprint the alphabets
 */


void print_alphabet_x10(void)
{
	int i = 0, letter;

	while (i <= 10)
	{

		char letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}

		_putchar('\n');
		i++;

	}
}
