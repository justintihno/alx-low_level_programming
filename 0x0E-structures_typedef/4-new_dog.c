#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;

	if (!name || !owner)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = strdup(name);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = strdup(owner);
	if (!new_dog->owner)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
