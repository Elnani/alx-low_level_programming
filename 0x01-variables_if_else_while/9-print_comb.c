#include <stdio.h>
#include <stdlib.h>
/**
 * main - print different combo of single char
 *
 * Return: Success (0)
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		putchar(x + '0');
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	return (0);
}
