#include <stdio.h>

/**
 * main - print lowercase alphabet in reverse, followed by a new line
 * Return: 0
 */
int main(void)
{
	char lc;

	for (lc = 'z'; lc >= 'a'; lc--)
		putchar(lc);

	putchar('\n');

	return (0);
}
