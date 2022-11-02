#include "main.h"

/**
 * _sqrt_recursion - retuns natural square root of a number
 * @n: number to be squared
 *
 * Return: if n has a natural square root - square root of n
 * if n does not have a natural square root --1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
