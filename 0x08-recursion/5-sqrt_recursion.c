#include "main.h"
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: number to find the natural square root of
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_helper(n, 1));
}
/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 * Return: The natural square root of the number, or -1 if it doesn't exist.
 */
int sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (sqrt_helper(n, i + 1));
}
