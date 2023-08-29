#include <stdio.h>
/**
 * main - code is in the main
 *
 * Return: success(0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
