#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string pointer
 * Return: void
 */
void puts2(char *str)
{
	int i;

	int len = 0;

	while (*(str + len) != '\0')
		len++;

	for (i = 0; i <= len - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
	}

	_putchar('\n');
}
