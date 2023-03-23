#include <stdio.h>
/**
 * main - FizzBuzz program
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			if ((i % 15) == 0)
				printf("FizzBuzz ");
			else if ((i % 3) == 0)
				printf("Fizz");
			else
				printf("Buzz ");
		}
		else
			printf(i);
	}
	printf("\n");

	return (0);
}
