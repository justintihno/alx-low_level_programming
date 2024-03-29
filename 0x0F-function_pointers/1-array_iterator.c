#include "function_pointers.h"
/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
