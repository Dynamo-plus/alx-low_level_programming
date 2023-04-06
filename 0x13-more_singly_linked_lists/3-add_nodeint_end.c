#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - a function to add newNode to the end of the lists
 * @n: integer parameters
 * @head: double pointer as the beginning of a test
 * Return: the address of the new element, or NULL if it fails
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *end = *head;

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (end->next != NULL)
		end = end->next;
	end->next = newNode;
	return (newNode);

}
