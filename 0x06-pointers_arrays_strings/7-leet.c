/**
 * leet - encodes a string into 1337.
 *
 * @str: pointer to a string.
 *
 * Return: pointer to the same string (modified in-place).
 */
char *leet(char *str)
{
	char *ptr = str;
	int i;

	while (*ptr)
	{
		for (i = 0; i < 5; i++)
		{
			if (*ptr == "aAeEoOtTlL"[i])
			{
				*ptr = "4433007711"[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
