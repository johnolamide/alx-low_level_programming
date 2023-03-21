#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to get last digit
 *
 * Return: returns the last digit of number
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;

	_putchar(i + '0');

	return (i);
}
