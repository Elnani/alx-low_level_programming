#include "main.h"
/**
 * _strcmp -  string comparation
 * @s1:string
 * @s2:strmp
 * Return:int
 * Bwave/ Bright
 */
int _strcmp(char *s2, char *s3)
{
	while (((*s2 != '\0') && (*s3 != '\0')) && (*s2 == *s3))
	{
		s2++;
		s3++;
	}

	if (*s2 == *s3)
	{
		return (0);
	}

	else
	{
		return (*s2 - *s3);
	}
}

