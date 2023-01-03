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
	unsigned char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}
