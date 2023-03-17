#include<stdio.h>
/**
 * main - print all possible combination of doublr digits
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j += i; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
