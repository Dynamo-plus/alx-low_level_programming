#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - print the length of listint
 * @h: pointer to the list
 * Return: number of node
*/

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}

	return (x);
}
