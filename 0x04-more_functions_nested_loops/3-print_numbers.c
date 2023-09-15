#include "main.h"
/**
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int j;

	j = 0;
	while (j <= 9)
	{
		_putchar (j + '0');
		j++;
	}
	_putchar('\n');
	return;
}
