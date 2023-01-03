#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: pointer to a memory area
 * @b: constant byte to fil the mmemory with
 * @n: number of bytes to fill
 * Return: return to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
