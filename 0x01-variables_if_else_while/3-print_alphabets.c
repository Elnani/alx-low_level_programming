#include <stdio.h>
/**
 * main - code is in the main
 *
 * Return: success(0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'B'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
