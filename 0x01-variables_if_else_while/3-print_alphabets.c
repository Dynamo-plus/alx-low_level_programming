#include <stdio.h>

/**
 * main - Entry point
 * Return:  if zero (success)
*/

int main(void)
{

	char lc_a = 'a';
	char uc_a = 'A';

	while (lc_a <= 'z')
	{
		putchar(lc_a);

		++lc_a;
	}

	while (uc_a <= 'Z')
	{
		putchar(uc_a);
		++uc_a;
	}

	putchar('\n');
	return (0);
}
