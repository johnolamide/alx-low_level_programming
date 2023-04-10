#include "main.h"
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	else
		return (1);
}
