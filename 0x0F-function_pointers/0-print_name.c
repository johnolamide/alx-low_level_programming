#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function parameter
 */
void print_name(char *name, void (*f)(char *))
{
	void (*fptr)(char *) = f;

	fptr(name);
}
