#include "dog.h"

/**
 * init_dog - Initializes a dog structure with provided values
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
