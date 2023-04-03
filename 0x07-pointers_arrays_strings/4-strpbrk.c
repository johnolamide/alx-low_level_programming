#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: string to check
 * Return: returns a pointer to the byte s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a;

		for (*a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
				return s;
		}
		s++;
	}

	return (NULL);
}
