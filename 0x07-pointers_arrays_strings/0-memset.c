#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the meory area with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to be filled memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
