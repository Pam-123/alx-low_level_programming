#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the newly created dog_t structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;
	int name_length, owner_length;

	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);

	name_length = strlen(name) + 1;
	name_copy = malloc(name_length * sizeof(char));
	if (name_copy == NULL) {
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_length = strlen(owner) + 1;
	owner_copy = malloc(owner_length * sizeof(char));
	if (owner_copy == NULL) {
		free(name_copy);
		free(new_dog_ptr);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
