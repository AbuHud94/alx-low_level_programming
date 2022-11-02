#include "main.h"

int find _sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root of a number
 * @num: number to find the square root of
 * @root: the root to be tested
 * Return: if n has a natural square root - square root of n
 * if n does not have a natural square root --1
 */
int find _sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}
