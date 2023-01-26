#include "lists.h"

/**
 * add_node - a function that adds a new node at
 * the beginning of a list_t list.
 * @head: node head.
 * @str: node string.
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *node;

	if (!head || !str)
	{
		return (0);
	}

	string = strdup(str);

	if (!string)
	{
		return (0);
	}
	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (0);
	}
	node->str = string;
	node->len = strlen(string);
	node->next = *head;
	*head = node;
	return (node);
}
/**
 * _strlen - a function that swaps integers wih pointers.
 * @s: is a pointer to a char.
 * Return: EXIT_SUCCESS.
 */
int _strlen(char *s)
{
	int x = 0;

	if (!s)
	{
		return (0);
	}
	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
