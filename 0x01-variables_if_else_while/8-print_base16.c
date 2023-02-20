#include <stdio.h>

/**
 * main - Entry point
 * Return:  if zero (success)
*/

int main(void)
{

	int i = '0';
	char letter = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		++letter;
	}

	putchar('\n');
	return (0);
}
