#include "main.h"
/**
 * _abs - computes the absolute vakue of numbers
 * @n: number to compute
 *
 * Return: returns the absolute values
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else
		return (-n);
}

/**
 * print_to_98 - prints to 98
 * @n: the number to print from
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n < 0)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			_putchar('-');
			if (_abs(i) > 100)
				_putchar('0' + (_abs(i) / 100));
			if (_abs(i) >= 10)
				_putchar('0' + ((_abs(i) / 10) % 10));
			_putchar('0' + (_abs(i) % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n >= 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i >= 100)
				_putchar('0' + (i / 100));
			_putchar('0' + ((i / 10) % 10));
			_putchar('0' + (i % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if ( i >= 10)
				_putchar('0' + ((i / 10) % 10));
			_putchar('0' + (i % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
