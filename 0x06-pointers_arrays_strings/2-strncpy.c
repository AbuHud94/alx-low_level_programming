#include "main.h"

/**
 * _strncpy - it copies a string with n
 * @dest: to copy to destination
 * @src: copy from
 * @n: number of char to be copied
 * Return: must return to destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
