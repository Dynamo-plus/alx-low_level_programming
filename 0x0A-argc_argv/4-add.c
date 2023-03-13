#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - check if num is an interger
 * @str: array of number as input
 * Return: if it is number return 1 if not 0
 */

int check_num(char *str)
{
	unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}

	return (1);
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 if sucessful else 1
 */

int main(int argc, char *argv[])
{
	int i, str_conv;

	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) == 1)
		{
			str_conv = atoi(argv[i]);
			sum += str_conv;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
