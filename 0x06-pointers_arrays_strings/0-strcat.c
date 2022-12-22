#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	size_t dest_len = 0;
	size_t i;

	while (dest[dest_len] != '\0')
		dest_len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
