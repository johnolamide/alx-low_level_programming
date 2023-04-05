#include "main.h"
/**
 * factorial - calculates the factori of a number
 * @n: number
 * Return: factorial value
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if (n == 0)
			return (1);
		return (-1);
	}
	return (n * factorial(n - 1));
}
