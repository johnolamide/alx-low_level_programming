#include "main.h"
/**
 * times_table - prints the times table
 * @j: size of the times table
 * Return: returns the table
 */
void times_table(int j)
{
	int n;

	for (n = 0; n <= j; n++)
	{
		int i;

		for (i = 0; i <= j; i++)
		{
			int m;

			m = n * i;
			if (i == 0)
				_putchar('0' + (m % 10));
			if (m < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + (m % 10));
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}

/**
 * print_times_table - prints the times table
 * @n: size of the table
 * Return: returns the table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		times_table(n);
	}
}
