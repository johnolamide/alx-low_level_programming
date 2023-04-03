#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: string to check
 * Return: returns a pointer to the byte s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char *ps;
	char *paccept;

	*ps = s;
	*paccept = accept;
	for (; *ps != '\0'; ps++)
	{
		for (;  *paccept != '\0'; paccept++)
		{
			if (*ps == *paccept)
				return ps;
		}

		paccept = accept;
	}

	return (NULL);
}
