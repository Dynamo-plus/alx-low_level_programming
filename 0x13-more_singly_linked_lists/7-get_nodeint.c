#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to integer.
 * @index: index of an element.
 * Return: node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value = 0;
	listint_t *tempNode;

	if (head == NULL)
	{
		return (NULL);
	}
	while (value < index)
	{
		tempNode = head;
		tempNode =tempNode->next;
		value++;
	}
	return (tempNode);
}i
