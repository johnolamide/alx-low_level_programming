#include<stdio.h>
/**
 * main - prints every combination of digits
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int n;
	for(n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
