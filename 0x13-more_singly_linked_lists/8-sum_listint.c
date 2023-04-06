#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum of all linkedlist data
 * @head: pointer to integer
 * Return: sum or null
 */
int sum_listint(listint_t *head)
{
	listint_t *sum_list = head;
	int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (sum_list)
	{
		count += sum_list->n;
		sum_list = sum_list->next;
	}
	return (count);
}
