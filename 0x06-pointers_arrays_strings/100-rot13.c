#include <stdio.h>

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWZYZABCDEFGHIHKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}

	return (s);
}
