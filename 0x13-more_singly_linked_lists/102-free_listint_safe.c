#include "lists.h"

/**
 * _ra - a function that reallocates memory for an array of pointers
 * to the nodes in a linked list.
 * @list: old list to append.
 * @size: size of the new list (always one more than the old list).
 * @new: new node to add to the list.
 * Return: new list pointer.
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t x;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[x] = list[x];
	newlist[x] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @head: double pointer to the start of the list.
 * Return: size ot the list that was free'd.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t x, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
	{
		return (num);
	}
	while (*head != NULL)
	{
		for (x = 0; x < num; x++)
		{
			if (*head == list[x])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
