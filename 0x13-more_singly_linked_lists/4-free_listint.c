#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list.
 * @head: integer to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *free_space;

	while (head)
	{
		free_space = head->next;
		free(head);
		head = free_space;
	}
}

