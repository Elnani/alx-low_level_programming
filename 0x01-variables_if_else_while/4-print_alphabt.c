#include <stdio.h>
/**
 * main - main coddy
 * Return: Success (0)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	putchar('\n');

	return (0);
}
