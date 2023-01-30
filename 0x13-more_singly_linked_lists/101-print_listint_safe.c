#include "lists.h"

/**
 * print_listint_safe - a function that prints
 * a listint linked list.
 * @head: node head.
 * Return: num of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	int size = 0, x;
	const listint_t *tmp[100];

	if (!head)
		exit(98);

	while (head)
	{
		for (x = 0; x < size; x++)
		{
			if (tmp[x] == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		tmp[size] = head;
		size++;
		head = head->next;
	}
	return (size);
}
