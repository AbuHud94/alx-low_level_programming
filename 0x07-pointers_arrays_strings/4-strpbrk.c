#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 *
 * Return: a pointer to the matched byte
 * if no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (index = o; accept[i]; i++)

		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
