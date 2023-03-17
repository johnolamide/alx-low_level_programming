#include<stdio.h>
/**
 * main - prints the alphabet in reverse
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
