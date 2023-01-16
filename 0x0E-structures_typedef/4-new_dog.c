#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a fucntion that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: EXIT_SUCCESS.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pt;

	char *n, *o;
	int len_name = _strlen(name), len_owner = _strlen(owner), x;

	pt = malloc(sizeof(dog_t));
	if (!pt)
		return (0);
	n = malloc(sizeof(char) * (len_name + 1));
	if (!n)
	{
		free(n);
		free(pt);
		return (0);
	}
	o = malloc(sizeof(char) * (len_owner + 1));
	if (!o)
	{
		free(pt);
		free(o);
		free(n);
		return (0);
	}
	for (x = 0; x < len_name; x++)
		n[x] = name[x];
	n[x] = '\0';
	for (x = 0; x < len_owner; x++)
		o[x] = owner[x];
	o[x] = '\0';
	(*pt).name = n;
	(*pt).age = age;
	(*pt).owner = o;
	return (pt);
}

/**
 * _strlen - len of string
 * @s: string
 * Return: EXIT_SUCCESS.
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != 0)
		counter++;
	return (counter);
}
