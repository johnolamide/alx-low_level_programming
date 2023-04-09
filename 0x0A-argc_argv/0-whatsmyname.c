#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;
	char *name = argv[0];

	for (i = 0; name[i] != '\0'; i++)
		_putchar(name[i]);
	_putchar('\n');

	return (0);
}
