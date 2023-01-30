#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head node
 * Return: EXIT_SUCCESS.
 */
void free_listint(listint_t *head)
{
	while (head)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
