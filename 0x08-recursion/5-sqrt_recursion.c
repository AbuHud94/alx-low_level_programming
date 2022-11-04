#include "main h"

/**
 * sqrt2 - Finds the natural square root of a number.
 * @num: The number to find the square root of.
 * @root: The root to be tested.
 * Return: the square root.
 * If not -1.
 */
int sqrt2(int num, int root)
{
	if ((root * root) == num)
		return (root);

	else if (root * root > num)
		return (-1);

	return (sqrt2(num, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root
 * @n: The number to return the square root of
 * Return: the natural square root of n
 * if not -1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
