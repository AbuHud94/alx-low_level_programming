#include "main.h"

/**
 * _isalpha - It checks for alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is a letter, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= be 'Z'))
		return (1);
	else
		return (0);
}
