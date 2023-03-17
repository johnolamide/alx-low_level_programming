#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/**
 * main - prints out n with conditions
 * Return: returns 0 for SUCCESS
 */
int main(void)
{
	int n;
	int ln;
	
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	ln = n % 10;

	printf("Last digit of %d, is %d", n, ln);
	if (ln > 5)
		printf(" and is greater than 5\n");
	else if (ln == 0)
		printf("and is 0\n");
	else if (ln < 6 && ln != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
