#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: returns void
 */
void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			int m;

			m = n * i;
			if (m >= 10)
				_putchar('0' + ((m / 10) % 10));
			_putchar('0' + (m % 10));
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (m < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
