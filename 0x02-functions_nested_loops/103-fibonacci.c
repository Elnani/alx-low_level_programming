#include <stdio.h>
/**
 * main - a program to print finobacci sequence of even numbers
 *
 * Return: Success (0)
 */
int main(void)
{
	unsigned long first, second, sum;
	float sum_total;

	while (1)
	{
		sum = first + second;
		if (sum > 4000000)
		break;

		if ((sum % 2) == 0)
		{
			sum_total += sum;
		}
		first = second;
		second = sum;
	}
	printf("%.0f\n", sum_total);
	return (0);
}

