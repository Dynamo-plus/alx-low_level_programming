#include <stdio.h>

/**
 * main - Entry point
 * Return:  if zero (success)
*/

int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);

		++letter;
	}

	putchar('\n');
	return (0);
}
