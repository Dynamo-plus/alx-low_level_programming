#include "main.h"

/**
 * jack_bauer - Entry point
*/

void jack_bauer(void)
{
int i;
int j;

for (i = 0; i < 24; i++)
{
	for (j = 0; j < 60; j++)
	{
		if (i < 10)
		{
			if (j < 10)
			{
				_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar('0');
				_putchar('j);
			} else
			{
				_putchar('0');
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
		} else
		{
			if (j < 10)
			{
				_putchar(i);
				_putchar(':');
				_putchar('0');
				_putchar(j);
			} else
			{
				_putchar(i);
				_putchar(':');
				_putchar(j);
			}
		}
	}
}
}
