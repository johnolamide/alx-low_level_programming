#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or
 * -1 if n does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0, n));
}
/**
 * find_sqrt - finds the natural square root
 * of a number using binary search
 * @n: the number to find the square root of
 * @low: the lower bound of the search range
 * @high: the upper bound of the search range
 * Return: the natural square root of n,
 * or -1 if n does not have a natural square root
 */
int find_sqrt(int n, int low, int high)
{
	long mid = (low + high) / 2;
	long square = mid * mid;

	if (square == n)
		return (mid);
	if (high <= low)
		return (-1);
	if (square > n)
		return (find_sqrt(n, low, mid - 1));
	else
		return (find_sqrt(n, mid + 1, high));
}
