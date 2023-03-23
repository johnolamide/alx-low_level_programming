#include "main.h"
/**
 * print_triangle - print a triangle given the size
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i;

		for (i = 1; i <= size; i++)
		{
			int j;
			int k;

			for (j = (size - 1); j >= 0; j--)
				_putchar(' ');
			for (k = 1; k <= i; k++)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
