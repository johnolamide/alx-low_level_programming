#include "main.h"
/**
 * main - prints the name of the file it was compiled from
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	char *filename;

	filename = __FILE__;
	while (*filename)
		_putchar(*filename++);
	_putchar('\n');

	return (0);
}
