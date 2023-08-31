#include "main.h"
/**
 * print_alphabet_x10 - function used
 *
 * main - where function is used
 *
 * Return: Success(void)
 */
void print_alphabet_x10(void)
{
	int y;
	int z;

	for (y = 0; y <= 10; y++)
	{
		for (z = 'a'; z <= 'z'; z++)
		{
			_putchar(z);
		}
		_putchar('\n');
	}
}

