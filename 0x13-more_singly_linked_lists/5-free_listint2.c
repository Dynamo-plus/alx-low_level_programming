#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: double pointer integer.
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *newNode_two;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		newNode_two = (*head)->next;
		free(*head);
		*head = newNode_two;
	}
	*head = NULL;
}
