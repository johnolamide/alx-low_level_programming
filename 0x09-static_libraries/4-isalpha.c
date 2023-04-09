#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: the character to check
 *
 * Return:
 *	1 if alphabet
 *	0 if otherwise
 */
int _isalpha(int c)
{
	char a;

	a = (char)c;

	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	else
		return (0);
}
