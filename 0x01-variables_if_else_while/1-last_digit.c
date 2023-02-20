#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: return zero value (success)
*/

int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ln = n % 10;

	if (ln > 5)
	{
		printf("Last digit of %d is %d and is greater than 6\n", n, ln);
	} else if (ln < 6 && ln != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ln);
	} else
	{
		printf("Last digit of %d is %d and is 0\n", n, ln);
	}
	return (0);
}
