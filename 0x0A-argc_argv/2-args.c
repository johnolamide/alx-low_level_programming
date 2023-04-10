#include "main.h"
/**
 * main - prints all argument received
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		int i;

		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);

		return (0);
	}

	return (1);
}
