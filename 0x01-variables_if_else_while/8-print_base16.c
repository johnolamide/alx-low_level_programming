#include<stdio.h>
/**
 *main - prints hexadecimal digita
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int n;

	for (n = 0; n < 16; n++)
	{
		if (n <= 9)
			putchar('0' + n);
		else
			putchar(87 + n);
	}
	putchar('\n');

	return (0);
}
