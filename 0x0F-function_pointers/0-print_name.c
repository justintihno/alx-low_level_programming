#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to a function that takes a char pointer as argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
