#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints x
  *
  * Return: void
  */
void print_number(int c)
{
	unsigned int x;

	if (c < 0)
	{
		_putchar('-');
		c *= -1;
	}

	x = c;

	if (x / 10)
		print_number(x / 10);

	_putchar(x % 10 + '0');
}

