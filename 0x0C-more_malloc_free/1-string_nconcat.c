#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: second string copy index
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int len1, len2, i;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;

	cat = malloc((len1 + n + 1) * sizeof(char));

	if (cat == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cat[i] = s1[i];
	for (i = 0; i < n; i++)
		cat[i + len1] = s2[i];

	cat[len1 + n] = '\0';

	return (cat);
}
