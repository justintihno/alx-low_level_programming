#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and checks for errors
 * @b: Number of bytes to allocate
 * Return: Pointer to allocated memory
 */
 
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
