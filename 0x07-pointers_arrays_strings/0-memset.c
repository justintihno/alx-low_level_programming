#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: pointer to a memory area
 * @b: constant byte to fil the mmemory with
 * @n: number of bytes to fill
 * Return: return to memory area s
 */

void *_memset(void *s, int b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
