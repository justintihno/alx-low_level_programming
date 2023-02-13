#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A string of 0 and 1 characters representing a binary number
 *
 * Return: The converted number, or 0 if b is NULL or contains
 *         a character that is not 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	if (!b) return (0);

	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1') return (0);

		result = result * 2 + (b[i] - '0');

		i++;
	}

	return (result);
}
