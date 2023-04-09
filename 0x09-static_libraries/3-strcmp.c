#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: comparison value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	j = (int) s1[i] - s2[i];

	return (j);
}
