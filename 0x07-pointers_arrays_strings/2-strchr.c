#include "main.h"

/**
 *_strchr - A function to find if a letter is in a string
 * @s:= pointer
 * @c: letter
 *
 * Return: 0(success)
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i <= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
