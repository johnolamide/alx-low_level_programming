#include "main.h"
/**
 * main - prints all argument received
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		char *arg = argv[i];
		while (*arg)
		{
			_putchar(*arg);
			arg++;
		}
		_putchar('\n');
	}
	return (0);
}
