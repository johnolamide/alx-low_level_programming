#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 0;
	while (i < 10)
	{
		for (j = 'a'; j < 'z'; j++)
			_putchar(j);

		_putchar('\n');

		i++;
	}
}
