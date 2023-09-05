#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long first = 0, second = 1, next;

	for (count = 0; count < 50; count++)
	{
		next = first + second;
		printf("%lu", next);

		first = second;
		second = next;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
