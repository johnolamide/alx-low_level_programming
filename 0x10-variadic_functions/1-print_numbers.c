#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a separator
 * @separator: pointer to the seperator
 * @n: number of numbers to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (separator == NULL)
		printf("");
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d%c", num, separator);
	}
	printf("\n");
}
