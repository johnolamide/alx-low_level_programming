#include "main.h"
/**
 * puts_half - print the last half of a string
 * @str: string pointer
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
		len++;

	if (len % 2 == 0)
	{
		int i;

		for (i = (len / 2); i <= len - 1; i++)
			_putchar(*(str + i));
	}
	else
	{
		int i;

		for (i = ((len) / 2); i <= len - 1; i++)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
