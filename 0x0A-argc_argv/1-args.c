#include "main.h"
/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: return 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
		return (0);
	}
	else
		return (1);
}
