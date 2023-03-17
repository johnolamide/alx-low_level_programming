#include<stdio.h>
/**
 * main - prints four digit combination
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int n;
	int i;
	int j;
	int k;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i == n)
				continue;

			for (j = 0; j < 10; j++)
			{
				if (j == i)
					continue;
				for (k = j + 1; k < 10; k++)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(k + '0');

					if (n != 6 || i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
