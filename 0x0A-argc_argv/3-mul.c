#include "main.h"
/**
 * main - multiples two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0 for SUCCESS
 */
int main(int argc, char *argv[])
{
	int a;
	int b;
	int c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%d\n", c);

	return (0);
}
