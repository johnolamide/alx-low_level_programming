#include "main.h"
/**
 * _strlen - counts the length of a string
 * @s: pointer to the string
 * Return: lengtgh of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
