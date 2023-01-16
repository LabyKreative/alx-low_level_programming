#ifndef DOG
#define DOG

/**
 * struct dog - dog structure.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
