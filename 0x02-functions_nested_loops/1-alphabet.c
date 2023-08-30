#include "main.h"
/**
 * print_alphabet - _putchar to print small letters.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char j;

	j = 'a';
	while (j <= 'z')
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');

}
