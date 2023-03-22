#include "main.h"
/**
 * custom_itoa - converts an integer to a string
 * @n: the integer to convert
 * @s: a character array to store the resulting string
 * Return: the length of the resulting  string
 */
int custom_itoa(int n, char s[])
{
	int i;
	int sign;

	if ((sign = n) < 0)
		n = -n;

	i = 0;

	do
		s[i++] = n % 10 + '0';
	while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	return i;
}

/**
 * times_table - prints the 9 times table
 * Return: returns void
 */
void times_table(void)
{
	char buffer[4];
	int n;

	for (n = 0; n <= 9; n++)
	{
		int i;

		for (i = 0; i <= 9; i++)
		{
			int m;
			int l;

			m = n * i;
			l = custom_itoa(m, buffer);
			if (i > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m < 10)
				_putchar(' ');
			if (l == 1)
				_putchar(' ');
			_putchar(buffer[0]);
			if (l == 2)
				_putchar(buffer[1]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
