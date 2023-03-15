#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - a function to create an array from a specified char
 * @size: integer parameter
 * @c: character value
 *
 * Return: return str or null
*/

char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
