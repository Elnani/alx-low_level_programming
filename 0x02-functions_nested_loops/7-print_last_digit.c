#include "main.h"
/**
 * print_last_digit - main main
 * @c: parameter to be considered
 * Return: Success (0)
 */
int print_last_digit(int c)
{
	int last_dig;
	last_dig = c % 10;
	if (c < 0)
	{
		last_dig = last_dig * -1;
	}
	return last_dig;
}
	
