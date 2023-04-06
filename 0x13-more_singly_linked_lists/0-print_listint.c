#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - Print all member of listint
 * @h: integer parameters
 * Return: return the number of node
*/
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
