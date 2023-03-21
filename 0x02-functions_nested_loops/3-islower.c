#include "main.h"
/**
 * _islower -  -checks if a characer is upper or lower case
 * Return: 
 * 	1 if lowercase
 * 	0 if otherwise
 */
int _islower(char c)
{
	if (c >= 'a' || c <= 'z')
		return (1);
	else
		return (0);
}
