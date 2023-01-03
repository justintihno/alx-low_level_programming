#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @n: length of src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (dest);
}
