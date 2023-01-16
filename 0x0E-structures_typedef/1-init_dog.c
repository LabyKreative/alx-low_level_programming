#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function that initializes a
 * variable type of struct dog.
 * @d: struct dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
