#include "main.h"
/**
 * leet - encode into 1337speak
 * @mozart: input value
 * Return: mozart value
 */
char *leet(char *mozart)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; mozart[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (mozart[i] == s1[j])
			{
				mozart[i] = s2[j];
			}
		}
	}
	return (mozart);
}
