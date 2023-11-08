#include "main.c"
/**
 * factorial - Setting up for the factorials.
 * @n: including the parameters.
 * Return: The value of n.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

