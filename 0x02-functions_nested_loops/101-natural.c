#include <stdio.h>
/**
 * main - miltiples of 3 and 5
 *
 * Return: success (0);
 */
int main(void)
{
	int j, g = 0;

	while (j < 1024)
	{
		if ((j % 3 == 0) || (j % 5 == 0))
		{
			g += 1;
		}
	j++;
	}
	printf("%d\n", g);
	return (0);
}
