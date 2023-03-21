#include "main.h"
/**
 * print_to_98 - prints to 98
 * @n: the number to print from
 * Return: returns void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			if (i > 99)
				_putchar('0' + (i / 100));
			_putchar('0' + (i / 10) % 10);
			_putchar('0' + (i % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				continue;
		}
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i >= 10)
				_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				continue;
		}
		_putchar('\n');
	}
}
