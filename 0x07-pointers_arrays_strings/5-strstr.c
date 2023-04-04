#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer string to search
 * @needle: pointer substring to find
 * Return: returns pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n == *haystack && *n != '\0' && *haystack != '\0')
		{
			n++;
			haystack++;
		}

		if (*n == '\0')
		{
			return (h);
		}

		haystack = h + 1;
	}

	return (NULL);
}
