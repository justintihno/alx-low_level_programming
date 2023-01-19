#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to the struct dog variable that needs to be initialized
 * @name: name of the dog, a string
 * @age: age of the dog, a float@owner: name of the owner of the dog, a string
 * This function takes in a pointer to a struct dog variable, and initializes
 * its name, age, and owner elements with the provided name, age, and owner parameters
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
