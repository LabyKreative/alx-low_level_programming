#include "lists.h"

/**
 * add_nodeint -  a function that adds a new node at
 * the beginning of a listint_t list.
 * @head: node head.
 * @n: new node data
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (!head)
	{
		return (0);
	}
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (0);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
