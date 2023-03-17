#include<stdio.h>
/**
 * main - prints the lower case alphabet
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	char c;

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c + 32);
	putchar("\n");

	return (0);
}
