#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - print the length of listint
 * @n: value of the data
 * @head: the first node of the linklist
 * Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);

	if (newNode == NULL)
	{
		return (NULL);
	}
}
