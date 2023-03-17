#include<stdio.h>
/**
 * main - print digits in base 10 using putchar
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar('0' + n);

	putchar('\n');

	return (0);
}
