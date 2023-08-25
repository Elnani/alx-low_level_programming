#include "main.h"

/**
 * _strcat - string concat 2
 * @dest:char
 * @src:char
 * Return:char
 *
 */
char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}

