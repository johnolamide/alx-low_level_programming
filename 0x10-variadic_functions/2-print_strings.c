#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: string printed between strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	if (separator != NULL && separator[0] == '\0')
		separator = NULL;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char *);

		printf("%s", (str) ? str : ("(nil)"));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
