#include "main.h"
/**
 * print_diagonal - print a diagonal with \
 * @n: input value
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
