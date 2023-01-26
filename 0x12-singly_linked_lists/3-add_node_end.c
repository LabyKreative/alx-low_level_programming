#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the
 * end of a list_t list.
 * @str: new data.
 * @head: node head.
 * Return: address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	unsigned int x;

	x = 0;
	if (*head == NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->next = NULL;
		*head = new;
		new->str = strdup(str);
		while (str[x] != '\0')
			x++;
		new->len = x;
	}
	else
	{
		current = *head;
		while (1)
		{
			if (current->next == NULL)
				break;
			current = current->next;
		}
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->next = NULL;
		current->next = new;
		new->str = strdup(str);
		while (str[x] != '\0')
			x++;
		new->len = x;
	}
	return (new);
}
