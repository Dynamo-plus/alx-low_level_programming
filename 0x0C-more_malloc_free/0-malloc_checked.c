#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to check if malloc is returning null
 * @b: size of memory needed
 *
 * Return: the address of memory as pointer;
*/

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);

	if (t == NULL)
		exit(98);

	return (t);
}
