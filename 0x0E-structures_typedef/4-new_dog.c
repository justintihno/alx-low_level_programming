#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 * Return: The length of the string.
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 * Return: The pointer to dest.
 */

char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];
	dest[index] = '\0';
	return (dest);
}

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
	new_dog = (dog_t *)malloc(sizeof(dog_t));
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
