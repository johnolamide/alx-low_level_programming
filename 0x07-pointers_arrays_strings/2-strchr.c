#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character to locate
 * Return: pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
