#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int g, h;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (g = 0; *(s + g); g++)
	{
		for (h = 0; h < 52; h++)
		{
			if (a[h] == *(s + g))
			{
				*(s + g) = b[h];
				break;
			}
		}
	}
	return (s);
}

