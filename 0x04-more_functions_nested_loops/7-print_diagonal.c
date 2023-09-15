#include "main.h"
/**
 * drawDiagonalLine - draws a diagional line.
 * @n: parameter for the size
 * Return (0)
 */

void drawDiagonalLine(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				putchar('*');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
