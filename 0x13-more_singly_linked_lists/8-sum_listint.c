#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: node head.
 * Return: EXIT_SUCCESS.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (sum);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
