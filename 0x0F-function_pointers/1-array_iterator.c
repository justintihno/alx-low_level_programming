#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	for (size_t i = 0; i < size; i++)
		action(array[i]);
}
