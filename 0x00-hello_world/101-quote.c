#include <stdio.h>
#include <unistd.h>
/**
 * main - prints string to stderr
 * Return: returns 1
 */
int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, text, 59);
	return (1);
}
