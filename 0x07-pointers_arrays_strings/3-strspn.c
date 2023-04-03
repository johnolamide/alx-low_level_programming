#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to compare
 * @accept: substring to compare with
 * Return: returns the number count of accept present in *s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int R;
	int i;
	int j;

	R = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				R++;
			}
		}
	}
	return (R);
}
