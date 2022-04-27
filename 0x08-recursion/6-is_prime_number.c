#include "main.h"

/**
 * prime_a - check the code for Holberton School students.
 * @a: number
 * @b: number of power
 * Return: Always 0.
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
		else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

