#include "main.h"
/**
 * _isalpha - checking for alphabet
 * @c: character to be checked
 *
 * Return: Success (0)
 */
int _isalpha(int c)
{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);

}
