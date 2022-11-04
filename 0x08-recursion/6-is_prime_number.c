#include "main.h"

/**
 * evaluate_n - recursion loop
 * @n: number
 * @i: number to iterate
 * Return: return 1 or 0
 */
int evaluate_n(int n, int i)
{
	if (i == n - 1)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}
	if (n % i != 0)
	{
		return (evaluate_n(n, i + 1));
	}

	return (0);
}
/**
 * is_prime_number - evaluate prime or not
 * @n: number
 * Return: 1 prime - 0 otherwise
 */
int is_prime_number(int n)
{
	return (sqrt2(n, 1));
}
