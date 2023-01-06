#include "main.h"

/**
 * is_palindrome - check a string if is a palindrome
 * @s: the string to be checked
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	if (*s != *(s + _strlen_recursion(s) - 1))
		return (0);
	return (is_palindrome(s + 1));
}
