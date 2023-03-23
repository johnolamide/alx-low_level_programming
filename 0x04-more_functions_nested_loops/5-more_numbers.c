#include "main.h"
/**
 * more_numbers - print 0-14 ten times
 * Return: void
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar(('0' + (i / 10) % 10));
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
