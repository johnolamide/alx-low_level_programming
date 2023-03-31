#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 * @str: the string to modify
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		/* If the current character is a lowercase letter, convert it to uppercase */
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		/* If the current character is the first character of a word, capitalize it */
		if (i == 0 || (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
			str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
			str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' || str[i - 1] == ')' ||
			str[i - 1] == '{' || str[i - 1] == '}') && str[i] != ' ')
		{
			str[i] -= 32;
		}
		i++;
	}

	return (str);
}
