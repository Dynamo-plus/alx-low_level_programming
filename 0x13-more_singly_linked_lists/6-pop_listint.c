#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function deletes the head node of a linked list.
 * @head: double pointer to int.
 * Return: head node data or empty return 0.
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *newList;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;

	newList = (*head)->next;
	free(*head);

	*head = newList;
	return (x);
}
