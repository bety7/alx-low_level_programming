#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int c;

	for (c = 40; c <= 57; c++)
	{
		putchar(c);
	}

	for (c = 97; c <= 102; c++)
	{
		putchar(c);
	}
	putchar(10);
	return (0);
}
