#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints astruct dog
 * @d: to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
