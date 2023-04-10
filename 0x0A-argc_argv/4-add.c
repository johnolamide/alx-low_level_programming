#include "main.h"
/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		int i;
		int sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);

		return (0);
	}
	if (argc == 1)
	{
		printf("0\n");

		return (0);
	}

	return (1);
}
