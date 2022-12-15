#include "main.h"

/**
 * print_number - function to print integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int i, j, c;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	c = 1;

	while (j > 9)
	{
		j /= 10;
		c *= 10;
	}

	for (; c >= 1; c /= 10)
	{
		_putchar(((i / c) % 10) + 48);
	}
}
