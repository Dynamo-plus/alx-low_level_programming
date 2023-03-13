#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 if success and 1 if not
 */

int main(int argc, char *argv[])
{
	int i, num1, num2, result;

	if (argc == 1 || argc == 2)

		printf("Error\n");

		return (1);

	num1 = atoi(argv[1]);

	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
