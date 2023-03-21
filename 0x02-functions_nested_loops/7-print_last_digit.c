#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to get last digit
 *
 * Return: returns the last digit of number
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	_putchar(_abs(i) + '0');

	return (_abs(i));
}
