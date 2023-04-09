#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	char *name = argv[0];

	printf("%s\n", *name);

	return (0);
}
