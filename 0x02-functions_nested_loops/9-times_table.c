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
			if (i == 0)
				_putchar('\0');
			else if (((n * i) / 10) != 0)
				_putchar('0' + ((n * i) / 10));
			else
				_putchar(' ');

			_putchar('0' + ((n * i) % 10));
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
