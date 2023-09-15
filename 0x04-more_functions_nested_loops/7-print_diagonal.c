#include "main.h"
/**
 * drawDiagonalLine - draws a diagional line.
 * @n: parameter for the size
 * Return (0)
 */

void drawDiagonalLine(int n)
{
	int i; int j;
	
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
