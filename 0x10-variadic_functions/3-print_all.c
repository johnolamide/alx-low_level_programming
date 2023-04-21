#include "variadic_functions.h"
/**
 * print_char - prints a char
 * @args: va_list of arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list of arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list of arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list of arguments
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_all - prins anything
 * @format: format string
 */
void print_all(const char * const format, ...)
{
	va_list args;
	void (*print_func[4])(va_list) = {print_char, print_int,
		print_float, print_string};
	char types[] = {'c', 'i', 'f', 's'};
	int i = 0;

	va_start(args, format);
	while (format[i])
	{
		int j = 0;

		while (j < 4)
		{
			if (format[i] == types[j])
				print_func[j](args);
			j++;
		}
		i++;
	}
	va_end(args);
}
