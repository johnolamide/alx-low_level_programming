#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to check
 * Return: 1 if prime, 0 othewise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}
/**
 * check_prime - checks if a number is prime
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if n is prime, otherwise 0
 */
int check_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}
