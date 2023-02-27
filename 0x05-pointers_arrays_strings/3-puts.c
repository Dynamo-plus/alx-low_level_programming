#include "main.h"

/**
 * _puts - check the code
 *
 * @str: parameter
 *
 * Return: Always 1 if sucessful.
 */
void _puts(char *str)
{

	int i;

	while (str[i])
	{
		if (_putchar(str[i]) == EOF)
		{
			return (EOF);
		}
		i++;
	}
	if (_putchar('\n') == EOF)
	{
		return (EOF);
	}
	return (1);
}
