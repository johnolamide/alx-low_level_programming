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
			if  (i > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}
			else if (m >= 10 && m < 100)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
