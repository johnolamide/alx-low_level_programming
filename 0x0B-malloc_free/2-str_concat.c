#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = 0;
	size_t len2 = 0;
	char *result;
	char *q;
	char *p1;
	char *p2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	p1 = s1;
	p2 = s2;

	while (*p1 != '\0')
	{
		len1++;
		p1++;
	}
	while (*p2 != '\0')
	{
		len2++;
		p2++;
	}
	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
		return (NULL);
	q = result;

	while (*s1 != '\0')
		*q++ = *s1++;

	while (*s2 != '\0')
		*q++ = *s2++;
	*q = '\0';

	return (result);
}
