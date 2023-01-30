#include "lists.h"

/**
 * reverse_listint - a function that reverses a
 * listint_t linked list.
 * @head: node head.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
	{
		return (*head);
	}

	prev = 0;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
