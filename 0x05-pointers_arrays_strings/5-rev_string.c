#include "main.h"
/**
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	for (i = len - 1, j = 0; i < j; i--, j++)
	{
		char temp;

		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
	}
}
