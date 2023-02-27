#include "main.h"

/**
 * _strlen - Function for checking the string length
 *
 * @s: parameter
 *
 * Return: Always length of the string.
 */

int _strlen(char *s)
{

	int i;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
