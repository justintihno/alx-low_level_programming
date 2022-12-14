#include <stdio.h>
#include "main.h"

/**
* _islower - entry point checks if a character is lowercase
* Description: checks is a character is lowercase
* @c: character to check integer value it receives
* Return: 1 if c is lowercase, 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
