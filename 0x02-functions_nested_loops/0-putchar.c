#include "main.h"
/**
 * main - prints _putchar
 * Return: return 0 for SUCCESS
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	return (0);
}
