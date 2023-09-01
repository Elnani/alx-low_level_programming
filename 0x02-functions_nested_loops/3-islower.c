#include "main.h"
/**
 * _islower - checking for small alphabets
 * @c: the character to be checked
 * Return: Success 1
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
