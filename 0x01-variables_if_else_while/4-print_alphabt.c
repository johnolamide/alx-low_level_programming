#include<stdio.h>
/**
 * main - prints all alphabet q and e excluded
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
