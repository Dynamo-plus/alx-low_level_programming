#include <stdio.h>

/**
 * main - Entry point
 * Return:  if zero (success)
*/

int main(void)
{

	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}

	putchar('\n');
	return (0);
}
