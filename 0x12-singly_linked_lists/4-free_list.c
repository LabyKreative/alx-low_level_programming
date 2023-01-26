#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: Pointer to the start of the list.
 * Return: EXIT_SUCCESS.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_list(head->next);
		free(head->str);
		free(head);
	}
}
