#include "main.h"
/**
 * times_table - prints the 9 times table
 * Return: returns void
 */
void times_table(void)
{
	int n;

	for (n = 0; n <= 9; n ++)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			_putchar(n * i);
			if ( i != 9 * i)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
}
