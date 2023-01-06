#include "main.h"

/**
 * _strlen_recursion - Finds the length of a string
 * @s: The string to be measured
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (1);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - check a string if is a palindrome
 * @s: the string to be checked
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);
	if (length <= 1)
		return (1);
	if (*s != s[length - 1])
		return (0);
	return (is_palindrome(s + 1));
}
