#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lower case 10 times
 * _putchar -  the function toprint the alphabets
 */


void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i <= 10)
	{

		letter = 'a';

		for (letter = 'a'; letter <= 'z'; letter++)
		{
		_putchar(letter);
		_putchar('\n');
		}

		i++;

	}
}
