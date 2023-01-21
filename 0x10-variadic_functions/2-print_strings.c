#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *curr_string;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		curr_string = va_arg(args, char*);
		if (curr_string == NULL)
			printf("(nil)");
		else
			printf("%s", curr_string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
