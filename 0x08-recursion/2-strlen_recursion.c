#include "main.h"

/**
 *  _strlen_recursion - to return the length of a string
 *  @s: the string to be measured
 *
 *  Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	/* base condition */
	if (*s == '\0')
	return (0);

	else
		return (1 + _strlen_recursion(s + 1));
}