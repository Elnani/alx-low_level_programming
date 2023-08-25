#include "main.h"

/**
 * leet -  1337 encode
 * @s: string to encode
 *
 * Return: address of k
 */
char *leet(char *k)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(k + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == k[i])
				k[i] = b[j];
		}
	}
	return (k);
}
/* Doing hard things is a must */

