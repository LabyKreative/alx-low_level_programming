#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - a function that copies the given string.
 * @dest: where to copy string to.
 * @src: string to copy.
 * Return: EXIT_SUCCESS.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x) != 0)
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog struct.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: EXIT_SUCCESS.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;
	int ln;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	ln = 0;
	while (name[ln] != '\0')
		ln++;
	ln++;
	new_name = malloc(ln * sizeof(*owner));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	ln = 0;
	while (name[ln] != '\0')
		ln++;
	ln++;
	new_owner = malloc(ln * sizeof(*name));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	_strcpy(new_owner, owner);
	(*new_dog).name = new_name;
	(*new_dog).age = age;
	(*new_dog).owner = new_owner;
	return (new_dog);
}
