#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0-9 except for 2 and 4.
 */
void print_most_numbers(void)
{
	int h;

	for (h = 0; h <= 9; h++)
	{
		if ((h != 2) && (h != 4))
		{
			_putchar(h + '0');
		}
	}
	_putchar ('\n');

}

