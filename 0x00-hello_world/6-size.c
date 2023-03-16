#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: returns 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (long)sizeof(float));

	return (0);
}
