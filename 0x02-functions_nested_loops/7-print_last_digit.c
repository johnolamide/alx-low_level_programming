#include "main.h"
/**
 * _abs - print the absolute value of a digit
 * @i: integer to get the absolute value
 *
 * Return: returns absolute value.
 *
 * print_last_digit - prints the last digit of a number
 * @n: number to get last digit
 *
 * Return: returns the last digit of number
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

int print_last_digit(int n)
{
	int i;

	i = n % 10;

	_putchar(_abs(i) + '0');

	return (_abs(i));
}
