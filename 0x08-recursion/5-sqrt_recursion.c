#include "main.h"

/**
 * _sqrt_recursion - func that return the sqrt of a natural number.
 * @n: natural number
 * Return: sqrt 0 if sqrt is not natural.
 */

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_number(n, 1));
	}
}

/**
 * sqrt_number - calculate the sqrt of a number.
 * @n: natural number
 * @i: number to be multiplied.
 * Return: sqrt 0 if sqrt is not natural.
 */

int sqrt_number(int n, int i)

{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	else
	{
		return (sqrt_number(n, i + 1));
	}
}
